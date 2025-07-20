# 🌦️ RealTime Weather Station with DHT11 & Blynk

Monitor temperature and humidity readings in real time on your smartphone using Blynk and a DHT11 sensor. Perfect for DIY weather stations, smart home projects, and learning IoT concepts!

---

## ✨ Features

- 📲 Real-time temperature & humidity readings on your mobile device.
- ☁️ Uses Blynk IoT platform for easy dashboard setup.
- 🔄 Updates every 2 seconds (modifiable).
- 🛠️ Simple, compact wiring.

---

## 🧰 Components Required

| Component       | Quantity | Notes                  |
|-----------------|----------|------------------------|
| NodeMCU / ESP8266 | 1      | Or compatible ESP board|
| DHT11 Sensor      | 1      | 3-pin digital version  |
| Jumper wires      | —      |                        |
| Breadboard        | 1      | Optional               |

---

## 🔌 Wiring

| DHT11 Pin | NodeMCU Pin |
|-----------|-------------|
| VCC       | 3.3V or 5V  |
| GND       | GND         |
| DATA      | D2 (GPIO4)  |

---

## 📱 Blynk Dashboard Setup

1. Create a new template (e.g. "RealTime Weather Station") in the Blynk App or Web dashboard.
2. Note your **Template ID**, **Template Name**, and **Auth Token** for use in the code.
3. Create two Datastreams:
   - **V0**: Temperature (double, e.g. 0–100)
   - **V1**: Humidity (double, e.g. 0–100)
4. Add widgets (Gauge, History Graph, Value Display) linked to V0 and V1 for live updates[8][14].

---

## 📝 How It Works

- The microcontroller repeatedly reads temperature and humidity from the DHT11 sensor.
- Data is sent to Blynk cloud servers, which display it in the app/web dashboard in real time.
- Serial port provides a debug log.

---

## 🖥️ Arduino Sketch

Place your code in a file named **DHT_Blynk.ino**. 


---

## 🚀 Usage

1. Wire up your DHT11 sensor to NodeMCU as shown above.
2. Update the sketch with your Blynk template details and WiFi credentials.
3. Upload the sketch to your NodeMCU/ESP board.
4. Open Blynk App or Web dashboard to see live sensor data!

---

## 🔎 Example Serial Monitor Output
- Temp: 26.0 °C, Humidity: 52.0%
- Temp: 26.1 °C, Humidity: 52.3%


---

## 💡 Tips

- You can change the measurement interval by setting a new value for `timer.setInterval()`.
- Use Blynk widgets like History Graph for data visualization over time.
- Extend with more sensors for enhanced weather stations! [8][14][10]

---

✨ *Adapt, fork, and enhance this project for smart weather monitoring or learning Internet of Things concepts!*




