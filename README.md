# Arduino Bluetooth Controlled RC Car 🏎️

A simple and efficient Arduino-based RC car project. This repository contains the source code to control a dual-motor robot via Serial communication (Bluetooth or USB) using an L298N or L293D motor driver.

## 📌 Features
- **Movement:** Forward, Backward, Left, Right, and Stop.
- **Protocol:** Serial communication at 9600 Baud.
- **Logic:** Simple `switch-case` logic for low latency response.

## 🛠️ Hardware Components
- **Microcontroller:** Arduino Uno (or any ATmega328P based board).
- **Motor Driver:** L298N H-Bridge.
- **Bluetooth Module:** HC-05 or HC-06.
- **Motors:** 2 x DC Gear Motors.
- **Power:** 7.4V or 12V Battery Pack.

## 🔌 Pin Mapping
| Arduino Pin | Motor Driver Pin | Description |
|-------------|------------------|-------------|
| **Pin 3** | IN1              | Motor A (Forward) |
| **Pin 5** | IN2              | Motor A (Backward)|
| **Pin 6** | IN3              | Motor B (Forward) |
| **Pin 7** | IN4              | Motor B (Backward)|



## 🕹️ Control Commands
The car operates by receiving specific characters via the Serial Port:

| Character | Action   |
|-----------|----------|
| **F** | Forward  |
| **B** | Backward |
| **L** | Left     |
| **R** | Right    |
| **S** | Stop     |

## 🚀 How to Use
1. **Clone the Repo:** `git clone https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git`
2. **Upload Code:** Open the `.ino` file in the Arduino IDE and upload it to your board.
3. **Connect Bluetooth:** Pair your phone with the HC-05/06 module.
4. **App Control:** Use any "Bluetooth Terminal" or "Arduino RC Car" app from the Play Store/App Store and map the buttons to 'F', 'B', 'L', 'R', and 'S'.

## 📋 License
This project is open-source and available under the MIT License.
