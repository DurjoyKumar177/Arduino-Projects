# LED Blink and Stop – Arduino Description

## 🔧 Project Overview

This Arduino project demonstrates how to blink two LEDs a **limited number of times** and then **stop** the execution of the program. It's a great example for beginners to understand how to use loops, delays, and control the flow of a program using `while(true)`.

---

## 🎯 Objective

- Blink **LED2** (connected to pin 12) exactly **100 times**.
- Then blink **LED1** (connected to pin 10) exactly **100 times**.
- Once both LEDs have completed their blink cycles, the program **stops execution permanently**.

---

## ⚙️ Setup Summary

- Two digital output pins (`10` and `12`) are configured as outputs to control two LEDs.
- A `count` variable is set to `100` to define how many times each LED should blink.
- The built-in `delay()` function is used to pause the program for 50 milliseconds between each ON and OFF state.

---

## 🔄 Execution Flow

1. **Setup Phase** (`setup()`):
   - Configure `Led1` and `Led2` as output pins.

2. **Main Loop** (`loop()`):
   - Use a `for` loop to blink **LED2** 100 times:
     - Turn it ON.
     - Wait 50ms.
     - Turn it OFF.
     - Wait another 50ms.
   - Then, use another `for` loop to blink **LED1** 100 times with the same delay pattern.

3. **Stopping Execution**:
   - After both LEDs finish blinking, the `while(true)` loop halts the program permanently.
   - The Arduino enters an infinite idle state, meaning no further code is executed unless the board is reset or powered off.

---

## 📝 Key Concepts

- **Digital Output**: Sending `HIGH` or `LOW` to a digital pin to control connected devices (like LEDs).
- **Loop Control**: Using `for` loops to repeat actions a fixed number of times.
- **Timing**: Using `delay()` to create visible blink effects.
- **Halting Execution**: Using `while(true)` to stop further execution after a task is done.

---

## ✅ Use Case

This approach is useful for:
- Projects that require one-time execution.
- Testing LED behavior for a fixed duration.
- Demonstrating control flow in Arduino programs.

---

## ⚠️ Notes

- The program will not restart unless the **Arduino is reset or power is cycled**.
- LEDs must be connected through **current-limiting resistors (e.g., 220Ω)** to avoid damage.
- You can change the `count` value or `delay` to experiment with different blink durations or repetitions.

---

## 📌 Summary

This project is a simple yet effective demonstration of:
- Controlling multiple LEDs.
- Looping a specific number of times.
- Stopping the program after task completion.

It’s ideal for understanding **basic Arduino programming concepts** with practical output.
