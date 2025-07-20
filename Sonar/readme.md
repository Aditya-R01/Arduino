# Arduino Sonar Sensor Scanner

This project demonstrates how to use an **HC-SR04 ultrasonic sensor** and a **servo motor** with an Arduino to create a simple sonar scanner system. The servo sweeps the sensor from side to side, capturing distance readings.

## Features

- Rotates a servo motor from **15° to 165° and back**.
- Uses **HC-SR04** to measure distance at each angle step.
- Outputs data over serial in a simple format for visualisation or logging.

## Components Required

- Arduino board (Uno, Nano, etc.)
- HC-SR04 ultrasonic sensor
- Servo motor
- Jumper wires
- Breadboard (optional)

## Wiring

| Component        | Arduino Pin |
|------------------|-------------|
| HC-SR04 Trig     | 10          |
| HC-SR04 Echo     | 11          |
| Servo Signal     | 12          |
| VCC (both)       | 5V          |
| GND (both)       | GND         |

*Connect the servo and sensor as shown above. Make sure the GND and VCC are correctly connected!*

## Usage

1. Upload the code to your Arduino board using the IDE.
2. Open the Serial Monitor at **9600 baud** to view the readings.
3. The output will appear as angle-distance pairs, e.g.:  
   `15,122.16,133. ... 165,105.164,107. ...`

## Use Processing software for Sonar plot


