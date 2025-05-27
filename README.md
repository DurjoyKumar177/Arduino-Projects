# 🔌 Arduino Circuit Experiments

This repository contains my personal experiments and learning projects using Arduino. These basic projects help me understand various electronic components, sensors, and how to build working circuits using Arduino boards.

## 📚 About This Repository

Each folder in this repository represents a small hands-on experiment using components like:
- LEDs
- Temperature & Humidity Sensors (e.g., DHT11)
- LCD Displays (16x2 with I2C module)
- Buzzers, Buttons, Relays
- Breadboard circuits and more

These experiments are written using the Arduino programming language (C/C++) and uploaded to boards like **Arduino UNO**.

---

## 🧪 Featured Project: Room Temperature & Humidity Monitor

**Description:**  
This project reads room temperature and humidity using a **DHT11** sensor and displays the data on a **16x2 LCD Display** with I2C adapter. It also provides:
- A forecast (based on humidity)
- Temperature advice (e.g., Stay Warm, Stay Cool)

### 🔩 Components Used
- Arduino UNO
- DHT11 Sensor
- 16x2 LCD Display
- I2C Module for LCD
- Jumper Wires
- Breadboard (optional)

### 🔌 Circuit Wiring
#### DHT11 Sensor:
- VCC → 5V  
- GND → GND  
- DATA → D4

#### LCD with I2C:
- VCC → 5V  
- GND → GND  
- SDA → A4  
- SCL → A5

### 📷 Preview (Optional)
You can add circuit images or photos here.

### 📁 Code Location
Check the folder: `dht11_lcd_temperature_monitor/`

---

## 🚀 How to Run
1. Open Arduino IDE.
2. Connect Arduino via USB.
3. Install required libraries:
   - Adafruit Unified Sensor
   - DHT Sensor Library by Adafruit
   - LiquidCrystal_I2C
4. Upload the sketch to the board.
5. View readings on LCD or Serial Monitor.

---

## 📌 Why I Built This
This repository is part of my journey to explore and understand the fundamentals of electronics and embedded programming. I use these projects to:
- Practice wiring real-world circuits
- Learn how sensors and displays interact with microcontrollers
- Improve my embedded C/C++ skills

---

## 🛠️ Future Plans
- Add more sensors (e.g., motion, light, gas)
- Build mini automation systems
- Use ESP32 for Wi-Fi-enabled projects

---

## 📬 Contact
Feel free to connect if you're interested in hardware tinkering or embedded systems!

