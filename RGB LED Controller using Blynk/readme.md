# 🌈 RGB LED Control with NodeMCU & Blynk

Control an RGB LED remotely using Blynk and a NodeMCU/ESP8266. Adjust the Red, Green, and Blue channels in real time from your phone, and experiment with color mixing for smart home lighting or creative projects!

---

## ✨ Features

- 📲 Real-time RGB LED color control from your phone or Blynk web dashboard.
- 🛠️ Simple wiring using NodeMCU/ESP8266.
- 💡 Adjust individual Red, Green, Blue channels via virtual sliders.
- 🔌 WiFi connectivity for remote operation.

---

## 🧰 Components Required

| Component         | Quantity | Notes                   |
|-------------------|----------|-------------------------|
| NodeMCU/ESP8266   | 1        | Or equivalent ESP board |
| RGB LED           | 1        | Common cathode          |
| Resistors         | 3        | 220–330Ω for each pin   |
| Jumper wires      | —        |                         |
| Breadboard        | 1        | Optional                |

---

## 🔌 Wiring

| RGB LED Pin | NodeMCU Pin | Color  | Notes          |
|-------------|-------------|--------|----------------|
| R (Red)     | D1 / GPIO5  | 🔴     |                |
| G (Green)   | D2 / GPIO4  | 🟢     |                |
| B (Blue)    | D3 / GPIO0  | 🔵     |                |
| Cathode     | GND         |        | Common ground  |

*Connect each color pin through a resistor to protect the LED and ensure proper color mixing!*

---

## 📱 Blynk App Setup

1. Create a new device in Blynk (template: "RGB LED Control").
2. Add three sliders:
   - **V0:** Red (0–255)
   - **V1:** Green (0–255)
   - **V2:** Blue (0–255)
3. Note your **Template ID**, **Template Name**, and **Auth Token** for use in your code.
4. Link each slider to one virtual pin for real-time RGB adjustment.

---

## 📝 How It Works

- Blynk sliders send values (0–255) for R, G, B over the network.
- NodeMCU receives slider values and writes PWM values to each LED pin, changing the color instantly.
- Serial monitor can be used for debugging (baud: 9600).

---

## 🖥️ Arduino Sketch

Update with your own Blynk Auth token and WiFi credentials.


---

## 🚀 Usage

1. Assemble the circuit as shown above.
2. Flash the NodeMCU with the sketch, updating your Blynk credentials.
3. Open the Blynk app and move the sliders for **Red**, **Green**, and **Blue**.
4. Watch your RGB LED display an endless rainbow of colors! 🌈

---

## 💡 Tips

- Try different resistor values for color tuning.
- Use Blynk's automation features for scheduled lighting effects.
- Extend with more LEDs or combine with sensors for smart lighting scenes!

---

✨ *Modify and expand this project for creative IoT lighting, DIY smart home, or just learning fun!*

