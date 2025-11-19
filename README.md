# 🌧️ Raindrop Detector using Arduino

## ✅ Short Description

Simple Arduino project that detects raindrops using an analog rain sensor and lights an LED when rain is detected.

---

## 🚀 Features
- Detects raindrops in real time
- Lights up LED when rain is detected
- Simple and beginner-friendly project
- Uses only 1 sensor + 1 LED

---

## 🛠️ Components Required

- Arduino Uno / Nano
- Raindrop Sensor Module (Analog output)
- LED
- 220Ω resistor
- Jumper wires
- USB cable

---

## 🔌 Wiring

### Raindrop Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| AO         | A0          |

### LED

| LED Pin    | Arduino Pin                |
|------------|---------------------------|
| Anode (+)  | 3 (via 220Ω resistor)     |
| Cathode (–)| GND                       |

---

## 💾 Code

The Arduino code for this project is available in [`main/main.ino`](main/main.ino).

---

## 🖼️ Images

You can add wiring diagrams or setup photos to the [`images`](images) folder.

---

## 📂 Folder Structure

```
Rain-Drop-Detector-Arduino_Led/
├── README.md
├── main/
│   └── main.ino
└── images/
```

---

## 🎬 Getting Started

1. Connect the components as per the wiring guide.
2. Upload the code in [`main/main.ino`](main/main.ino) to your Arduino board.
3. When rain is detected, the LED will turn on automatically!

---

## 🙏 Credits

Made by [SujalGc99](https://github.com/SujalGc99)