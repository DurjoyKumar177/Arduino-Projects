# LED Blink Sequence with Arduino

## 🔧 Project Overview

This project demonstrates how to blink **two LEDs one after the other** using an Arduino. Each LED blinks 100 times with a short delay, and then control switches to the next LED. The process continues indefinitely.

---

## 🔌 Required Components

- 1 × Arduino UNO (or compatible board)
- 2 × LEDs (any color)
- 2 × 220Ω resistors (for current limiting)
- Jumper wires
- Breadboard
- USB cable for Arduino

---

## ⚙️ Wiring Instructions

### LED1 (Connected to Pin 10):
1. Place the first LED on the breadboard.
2. Connect the **longer leg (anode)** of LED1 to **Arduino pin 10** using a jumper wire.
3. Connect the **shorter leg (cathode)** to one end of a **220Ω resistor**.
4. Connect the other end of the resistor to **GND** (ground) on the Arduino.

### LED2 (Connected to Pin 12):
1. Place the second LED on the breadboard.
2. Connect the **longer leg (anode)** of LED2 to **Arduino pin 12** using a jumper wire.
3. Connect the **shorter leg (cathode)** to one end of a **220Ω resistor**.
4. Connect the other end of the resistor to **GND** (ground) on the Arduino.

---

## ⚡ Uploading the Program

1. Open the **Arduino IDE**.
2. Write or paste your LED blinking code in the editor.
3. Select your **board type** (e.g., Arduino Uno) under `Tools > Board`.
4. Select the correct **COM port** under `Tools > Port`.
5. Click the **Upload** button (arrow icon) to send the code to the Arduino.

---

## 🧠 Working Concept

- The Arduino sets pins **10** and **12** as output.
- It blinks LED2 100 times with a 50ms delay between ON and OFF.
- Then it blinks LED1 100 times similarly.
- This sequence repeats in a loop, creating an alternating LED blinking effect.

---

## 📝 Notes

- You can change the delay or number of blinks in the code to adjust timing.
- Always use a **current-limiting resistor** with LEDs to prevent damage.
- If nothing lights up, double-check pin connections and resistor placement.

---

## ✅ Summary

This project helps you understand:
- How to control digital output pins on an Arduino.
- The use of `for` loops and delays for timing.
- Proper wiring for LEDs with resistors on a breadboard.

It's a great beginner-friendly way to explore physical computing with Arduino!
