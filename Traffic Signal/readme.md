# 🚦 Basic Traffic Signal with Arduino and LCD

This project demonstrates a simple **traffic signal system** using an Arduino, three LEDs, and an LCD screen. The lights cycle through green, yellow, and red, with real-time status display on the LCD.

## 🧰 Components Required

| Component         | Quantity | Notes                    |
|-------------------|----------|--------------------------|
| Arduino board     | 1        | Uno or compatible        |
| Red LED           | 1        |                          |
| Yellow LED        | 1        |                          |
| Green LED         | 1        |                          |
| 16x2 LCD display  | 1        | Uses LiquidCrystal lib   |
| Resistors         | 3        | For LEDs, 220Ω–330Ω      |
| Jumper wires      | —        |                          |
| Breadboard        | 1        | Optional                 |

## 📝 Pin Connections

| Function         | Arduino Pin |
|------------------|-------------|
| Red LED          | 10          |
| Yellow LED       | 11          |
| Green LED        | 12          |
| LCD RS           | 2           |
| LCD E            | 8           |
| LCD D4           | 7           |
| LCD D5           | 6           |
| LCD D6           | 5           |
| LCD D7           | 3           |

## ⚡ How It Works

- The Arduino cycles through **Green → Yellow → Red** lights.
- Each phase lasts for **5 seconds** (can be adjusted in code).
- The **LCD shows the active light and a status message**.
- Serial Monitor outputs system status for debugging.


## 📦 Usage

1. Connect the LEDs and LCD as shown above.
2. Upload the sketch to your Arduino via the IDE.
3. Open the Serial Monitor (**9600 baud**) for status logs.
4. Watch the LEDs and LCD cycle in real time!

## 🖥️ Arduino Code

Find the full code in [basic_traffic_signal.ino](basic_traffic_signal.ino).

---

✨ *Modify timing, messages, or outputs for your own creative traffic system simulations!*



