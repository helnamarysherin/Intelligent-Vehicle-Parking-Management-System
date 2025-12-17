# Intelligent-Vehicle-Parking-Management-System

## 📌 Overview
An Arduino-based smart parking management system that monitors vehicle entry and exit using sensors and displays real-time parking availability on an LCD. The system prevents over-parking, improves traffic flow, and demonstrates an efficient solution for smart parking infrastructure.

---

## 🎯 Objectives
- Automatically count vehicles entering and exiting the parking area
- Display real-time parking availability
- Prevent over-parking using logical constraints
- Demonstrate a smart parking solution using embedded systems

---

## ⚙️ System Working
- Entry and exit of vehicles are detected using digital inputs (IR sensors in hardware, switches in simulation).
- Each entry increases the occupied slot count.
- Each exit decreases the occupied slot count.
- The LCD continuously displays:
  - Number of used slots
  - Number of free slots
- When parking capacity is reached, the system displays **FULL**.

---

## 🧰 Components Used
- Arduino UNO  
- 2 × IR Sensors (Entry & Exit)  
- 16×2 LCD Display  
- Potentiometer (10kΩ)  
- Breadboard  
- Jumper Wires  

---

## 💡 Key Features
- Real-time parking slot monitoring
- Entry–exit logic to avoid false counting
- Over-parking protection
- Cost-effective and scalable design
- Suitable for smart city applications

---

## 🧪 Simulation
The system is simulated using **Tinkercad Circuits**.  
Due to simulator limitations, slide switches are used to emulate IR sensor outputs.

---

## 🎥 Simulation Demo Video
(Add your YouTube or Google Drive link here)

---

## 🚀 Future Enhancements
- Gate control using servo motors
- IoT-based parking availability display
- Mobile application integration
- Automated billing system

---

## 👩‍💻 Author
- Helna Mary Sherin
