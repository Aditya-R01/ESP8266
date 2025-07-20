# 📡 ESP8266 WiFi Development Board

The **ESP8266** is a low-cost, powerful WiFi microcontroller, perfect for DIY IoT (Internet of Things) projects. Its easy programming, versatility, and built-in wireless capabilities have made it a maker favorite!

---

## ✨ Key Features

- ⚡ **80MHz 32-bit microcontroller** (Tensilica L106)
- 📶 **2.4GHz WiFi** (802.11 b/g/n)
- 🗂️ **Flash Memory:** 512 KB – 16 MB (depends on module)
- 🧠 **RAM:** 64 KB instruction, 96 KB data
- 🔗 Supports UART, SPI, I2C, PWM, GPIO, ADC
- 🔌 **Input Voltage:** 3.0–3.6V (not 5V tolerant)
- 💻 Programmable via **Arduino IDE**, Lua, or MicroPython

---

## 🧰 Typical Modules

| Module     | Description                            | Features                       |
|------------|----------------------------------------|--------------------------------|
| **ESP-01** | Smallest, 8 pins                       | Few GPIOs, great for basics    |
| **NodeMCU**| Dev board with USB, easy prototyping   | Breadboard-ready, many GPIOs   |
| **Wemos D1**| Arduino-style, 1:1 with Uno form factor| Convenient shield support      |

---

## 📝 Pinout (NodeMCU Example)

| Function     | Pin Name (ESP8266) | GPIO # | Notes               |
|--------------|--------------------|--------|---------------------|
| Digital I/O  | D0–D8              | 16,5,4,0,2,14,12,13 | D numbers = Board labels |
| Analog In    | A0                 | ADC0   | 0–1V input only     |
| 3V3 Output   | 3V3                |        | 3.3V devices only   |
| GND          | G                  |        | Ground              |
| UART (Serial)| RX, TX             | GPIO3,1| USB upload/debug    |

*⚠️ Most pins max 12mA sink/source. IO is 3.3V only!*

---

## 🚀 Quick Start

1. **Plug in** NodeMCU via Micro USB.
2. **Install** the [Arduino IDE](https://www.arduino.cc/en/software) and add **ESP8266 board support** via Board Manager.
3. **Select** your board: `Tools > Board > NodeMCU 1.0 (ESP-12E Module)` (or as appropriate).
4. **Start coding!** Try a “Blink” or “WiFi Scan” example.

---

## 🌐 Useful Links

- [ESP8266 Community Wiki](https://github.com/esp8266/esp8266-wiki/wiki)
- [ESP8266 Arduino Core](https://github.com/esp8266/Arduino)
- [NodeMCU Docs](https://nodemcu.readthedocs.io/)

---

*📲 Build smart devices, weather stations, web servers, sensor networks, or whatever you imagine! ESP8266: the WiFi chip for makers.*



