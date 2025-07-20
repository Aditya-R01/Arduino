# 🌡️ Arduino DHT11 Temperature & Humidity Monitor

This project reads **temperature** and **humidity** using a **DHT11 sensor** and displays the values on a **16x2 I2C LCD**. It also prints the readings to the **Serial Monitor** for debugging or logging.

---

## 🧰 Components Required

| Component              | Quantity |
|------------------------|----------|
| Arduino Uno/Nano       | 1        |
| DHT11 Sensor           | 1        |
| 16x2 LCD with I2C      | 1        |
| Jumper Wires           | A few    |
| Breadboard             | 1        |

---

## 🔌 Circuit Connections

| Component      | Arduino Pin |
|----------------|-------------|
| DHT11 Data Pin | 10          |
| DHT11 VCC      | 5V          |
| DHT11 GND      | GND         |
| LCD SDA        | A4          |
| LCD SCL        | A5          |

> **Note**: The LCD uses the I2C address `0x27`. Adjust in code if different.

---


