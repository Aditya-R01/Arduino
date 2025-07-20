# ⌨️ Arduino Keypad & LCD Input Display

This project interfaces a **4x3 matrix keypad** with a **16x2 I2C LCD display** to capture and show button presses in real-time. When a user presses a key, it’s displayed on the LCD for a second before resetting.

---

## 🧰 Components Required

| Component              | Quantity |
|------------------------|----------|
| Arduino Uno/Nano       | 1        |
| 4x3 Keypad             | 1        |
| 16x2 I2C LCD           | 1        |
| Jumper Wires           | A few    |
| Breadboard             | 1        |

---

## 🔌 Circuit Connections

### Keypad

| Keypad Pin | Arduino Pin |
|------------|-------------|
| R1         | 2           |
| R2         | 3           |
| R3         | 4           |
| R4         | 5           |
| C1         | 6           |
| C2         | 7           |
| C3         | 8           |

### LCD (I2C)

| LCD Pin | Arduino Pin |
|---------|-------------|
| SDA     | A4          |
| SCL     | A5          |

> LCD I2C address is `0x27`. Modify if different.

---

