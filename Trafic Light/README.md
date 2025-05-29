# 🚦 Traffic Light Simulation

This beginner-friendly Arduino project simulates a real-world traffic light using 3 LEDs: red, yellow, and green. It mimics how traffic lights operate at an intersection using simple timing logic.

---

## 🎯 Objective

To understand:
- Digital pin output control
- LED timing sequences
- Basics of `delay()` and `digitalWrite()`

---

## 🧩 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino UNO / Brave Board | 1        |
| Red LED          | 1        |
| Yellow LED       | 1        |
| Green LED        | 1        |
| 220Ω Resistors   | 3        |
| Breadboard       | 1        |
| Jumper Wires     | 5–7      |

---

## ⚡ Circuit Diagram (Wiring)

| LED Color | Arduino Pin | Resistor (220Ω) | GND Connection |
|-----------|-------------|------------------|----------------|
| Red       | D8          | ✅               | Yes            |
| Yellow    | D9          | ✅               | Yes            |
| Green     | D10         | ✅               | Yes            |

- The **long leg** (anode) of each LED goes to its respective Arduino digital pin through a resistor.
- The **short leg** (cathode) goes to GND.

---

## 🧠 How It Works

- **Green ON** for 5 seconds → represents "GO"
- **Yellow ON** for 2 seconds → represents "SLOW DOWN"
- **Red ON** for 5 seconds → represents "STOP"
- The cycle then repeats indefinitely.

---

## 🧾 Arduino Code

See [`traffic_light.ino`](traffic_light.ino) in this folder for the full code.

---

## 🛠️ How to Run

1. Open the Arduino IDE.
2. Connect your Arduino UNO or Brave Board via USB.
3. Upload the `traffic_light.ino` file.
4. Build the circuit on a breadboard.
5. Power on and observe the LED cycle.

---

