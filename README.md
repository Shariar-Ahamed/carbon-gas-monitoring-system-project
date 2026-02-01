# 🌫️ Carbon Gas Monitoring System Project

![Language](https://img.shields.io/badge/Language-Arduino%20C%2B%2B-green.svg)
![Platform](https://img.shields.io/badge/Platform-Arduino%20UNO-lightgrey.svg)
![Course](https://img.shields.io/badge/Course-CSE224-blue.svg)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg)

 A **sensor-based Carbon Gas Monitoring System** designed to detect **Carbon Monoxide (CO)** and **Carbon Dioxide (CO₂)** concentration levels.  
  
 This project was developed as part of the **Digital Logic Design Lab (CSE224)** at **Daffodil International University**, focusing on practical implementation of digital logic concepts, sensors, and real-time environmental monitoring.

---

## 📑 Table of Contents
- [🚀 Features](#-features)
- [🛠️ Technologies & Components](#️-technologies--components)
- [📂 Project Structure](#-project-structure)
- [⚙️ Working Principle](#️-working-principle)
- [🔌 Circuit Diagram](#-circuit-diagram)
- [💻 Code Description](#-code-description)
- [📊 Results & Output](#-results--output)
- [⚠️ Limitations](#️-limitations)
- [📌 Future Improvements](#-future-improvements)
- [👨‍💻 Contributors](#-contributors)
- [🎓 Academic Information](#-academic-information)
- [📅 Submission Date](#-submission-date)
- [📜 License](#-license)

---

## 🚀 Features
- 🌫️ Detects **Carbon Monoxide (CO)** and **Carbon Dioxide (CO₂)**
- 📊 Continuous real-time gas monitoring
- 🚨 Alert system using LED/Buzzer for unsafe gas levels
- 🔌 Sensor-based automatic detection
- ⚡ Fast response and low power consumption
- 🧠 Practical application of **Digital Logic Design** concepts

---

## 🛠️ Technologies & Components
- **Arduino UNO**
- **Gas Sensor (MQ Series)**
- **LED / Buzzer**
- **Breadboard & Jumper Wires**
- **Arduino IDE**
- **Digital Logic Design Principles**

---

## 📂 Project Structure
```bash
carbon-gas-monitoring-system-project
│
├── circuit-diagram
│   └── circuit.png
│
├── code-file
│   └── carbon_gas_monitoring_system.ino
│
├── project-gallery
│   ├── image-1.jpg
│   ├── image-2.jpg
│   ├── image-3.jpg
│   └── video.mp4
│
├── report
│   └── project-report.pdf
│
└── README.md
```

---

## ⚙️ Working Principle
1. The gas sensor continuously senses CO and CO₂ from the surrounding air.
2. The sensor generates an analog signal proportional to gas concentration.
3. Arduino reads the sensor value and compares it with predefined threshold levels.
4. When gas concentration exceeds the safe limit:
   - An alert is triggered using LED or buzzer.
5. The system continuously monitors the environment in real time.

---

## 🔌 Circuit Diagram
```bash
circuit-diagram/circuit.png
```
It shows the proper connection between the gas sensor, Arduino board, and alert components.  

---

## 💻 Code Description  
- **File:** `carbon_gas_monitoring_system.ino`  
- **Location:** `code-file/`  
- **Main functionalities:**  
  - Reading sensor values  
  - Applying threshold-based logic  
  - Activating alert system for unsafe gas levels  
- Written in **Arduino C/C++** and easy to modify.  

---

## 📊 Results & Output
- Successfully detects high concentration of CO and CO₂ gases.  
- Alert system responds immediately when danger level is reached.  
- Ensures safety through real-time monitoring.  
- Project images and demo video are available in the `project-gallery` folder.

---

## ⚠️ Limitations
- Fixed threshold values  
- No data logging or history storage  
- Local alert system only  
- Sensor accuracy depends on calibration  

---

## 📌 Future Improvements
- 📟 Add LCD display for live gas readings
- 🌐 Integrate IoT for remote monitoring
- 📱 Mobile/Web-based alert notification
- 🗄️ Store gas data for analysis
- 🔊 Multi-level alert system

---

## 👨‍💻 Contributors

| Student Name                   | Student ID       |
| ------------------------------ | ---------------- |
| Shahriar Ahammed               | 0242310005101019 |
| Md Moniruzzaman Rifat          | 0242310005101020 |
| Kohinur Akter                  | 0242310005101369 |
| Sinthea Alam                   | 0242310005101693 |
| Sanjida Benthey Akther Sumaiya | 0242310005101719 |

---


## Academic Information
- **Course:** CSE224 – Digital Logic Design Lab  
- **Department:** Computer Science and Engineering
- **University:** 𝐃𝐚𝐟𝐟𝐨𝐝𝐢𝐥 𝐈𝐧𝐭𝐞𝐫𝐧𝐚𝐭𝐢𝐨𝐧𝐚𝐥 𝐔𝐧𝐢𝐯𝐞𝐫𝐬𝐢𝐭𝐲
- **Course Teacher:** Amir Sohel **Lecturer (senior scale)**
- **Project Type:** Academic Lab Project

---

## 📅 **Submission:** *November 2024*

---

## 📜 License

This project is developed for academic and educational purposes only.