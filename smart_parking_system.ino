#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 9, 8);

const int entrySensor = 2;
const int exitSensor  = 3;

int totalSlots = 5;
int usedSlots  = 0;

bool entryBlocked = false;
bool exitBlocked  = false;

void setup() {
  pinMode(entrySensor, INPUT_PULLUP);
  pinMode(exitSensor, INPUT_PULLUP);

  lcd.begin(16, 2);
  lcd.print("Smart Parking");
  delay(2000);
  lcd.clear();
}

void loop() {

  // ENTRY
  if (digitalRead(entrySensor) == LOW && !entryBlocked) {
    if (usedSlots < totalSlots) {
      usedSlots++;
    }
    entryBlocked = true;
  }
  if (digitalRead(entrySensor) == HIGH) {
    entryBlocked = false;
  }

  // EXIT
  if (digitalRead(exitSensor) == LOW && !exitBlocked) {
    if (usedSlots > 0) {
      usedSlots--;
    }
    exitBlocked = true;
  }
  if (digitalRead(exitSensor) == HIGH) {
    exitBlocked = false;
  }

  // LCD DISPLAY
  lcd.setCursor(0, 0);
  lcd.print("Used: ");
  lcd.print(usedSlots);
  lcd.print("   ");

  lcd.setCursor(0, 1);
  lcd.print("Free: ");
  lcd.print(totalSlots - usedSlots);
  lcd.print("   ");

  if (usedSlots == totalSlots) {
    lcd.setCursor(10, 1);
    lcd.print("FULL");
  } else {
    lcd.setCursor(10, 1);
    lcd.print("    ");
  }

  delay(200);
}
