# 🛎️ Arduino Sonar Sensor Scanner

This project demonstrates how to use an **HC-SR04 ultrasonic sensor** and a **servo motor** with an Arduino to create a simple sonar scanner system. The servo sweeps from side to side, capturing distance readings. 🌐

## ✨ Features

- 🔄 Rotates a servo motor from **15° to 165° and back**.
- 📡 Uses **HC-SR04** to measure distance at every angle.
- 📊 Outputs data over serial in an easy-to-read format.

## 🧰 Components Required

| Component            | Quantity | Notes                   |
|----------------------|----------|-------------------------|
| Arduino board        | 1        | Uno or compatible       |
| HC-SR04 sensor       | 1        |                         |
| Servo motor          | 1        |                         |
| Jumper wires         | —        |                         |
| Breadboard (optional)| 1        |                         |

## 🔌 Wiring

| Function        | Arduino Pin |
|-----------------|-------------|
| HC-SR04 Trig    | 10          |
| HC-SR04 Echo    | 11          |
| Servo Signal    | 12          |
| VCC (both)      | 5V          |
| GND (both)      | GND         |

*Connect the servo and sensor as shown above. Make sure both VCC and GND are properly wired!* ⚡

## 💡 How It Works

- The servo motor sweeps from **15° to 165°** and back, measuring distances as it moves.
- Each measurement is sent over the serial port: `angle,distance.` (e.g., `15,122.` `16,133.` ...)
- Data can be visualized or logged for mapping nearby objects!


## 🖥️ Usage

1. 🛠️ Connect HC-SR04 and servo as described.
2. ⬆️ Upload the code to your Arduino.
3. 🖥️ Open the Serial Monitor (**9600 baud**) to view the readings.
4. Optionally, visualize results in Processing or another software.

## 📄 Arduino Code

View the full code in [Sonar.ino](Sonar.ino).

---

✨ *Fork and adapt this project for your own robotics experiments or sensor mapping tasks! Happy scanning!*


