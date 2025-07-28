# 💡 Smart AC LED Bulb Switch 💡

Control your AC LED bulb remotely and safely using the Blynk app and an ESP8266 microcontroller with a **RELAY MODULE**! This project provides a practical solution for smart home lighting, with a strong emphasis on electrical safety.

## ⚠️ **CRITICAL SAFETY WARNING** ⚠️

**This project involves working with AC MAINS VOLTAGE, which can be EXTREMELY DANGEROUS and FATAL if not handled correctly. If you are not experienced or comfortable working with mains electricity, DO NOT proceed. Seek assistance from a qualified electrician or someone with extensive electrical safety knowledge.**

**NEVER connect the ESP8266 or any low-voltage component directly to AC mains. Always use a proper relay module designed for mains voltage and ensure proper insulation and wiring practices. All AC wiring must be done with the power supply disconnected.**

## ✨ Features

* **Remote Control:** Turn your AC LED bulb ON/OFF from anywhere using the Blynk mobile app.
* **Wi-Fi Connectivity:** Utilizes ESP8266 for seamless connection to your home Wi-Fi network.
* **Safe Switching:** Employs a **relay module** for secure electrical isolation between the low-voltage control circuit and the high-voltage AC circuit.

## 📦 Components Required

* **ESP8266 NodeMCU/ESP-01/ESP-12E Module** (e.g., NodeMCU ESP-12E)
* **1-Channel 5V Relay Module** (ESSENTIAL for AC switching!)
* **AC LED Bulb** (standard household bulb)
* **AC Lamp Holder with Wires**
* **AC Plug** (for connecting to wall socket)
* **Breadboard** (for prototyping the ESP8266 to Relay connection)
* **Jumper Wires**
* **Micro USB Cable** (for ESP8266 power and programming)
* **Blynk Account & App** (available on iOS and Android)

## ⚡ Circuit Diagram (Focus on Safety!)

**IMPORTANT: Disconnect all power from your AC circuit before making any connections. Double-check all wiring before plugging anything into a wall socket.**

**(Using D1/GPIO5 for control):**

* ESP8266 **5V/VIN** ➡️ Relay Module **VCC**
* ESP8266 **GND** ➡️ Relay Module **GND**
* ESP8266 **D1 (GPIO5)** ➡️ Relay Module **IN**

* **AC Plug LIVE** ➡️ Relay Module **COM**
* Relay Module **NO** ➡️ AC Lamp Holder Wire 1
* **AC Plug NEUTRAL** ➡️ AC Lamp Holder Wire 2

This setup ensures that the ESP8266 only sends a low-voltage signal to activate the relay's coil, and the relay's internal contacts safely switch the high-voltage AC circuit for the LED bulb.

## 📲 Blynk App Setup

1.  **Download the Blynk IoT App:** Get it from the [App Store](https://apps.apple.com/us/app/blynk-iot/id1559403163) (iOS) or [Google Play Store](https://play.google.com/store/apps/details?id=cloud.blynk&hl=en_IN&gl=US) (Android).
2.  **Create a New Account:** If you don't have one, sign up.
3.  **Create a New Template:**
    * Go to **Developer Zone** -> **My Templates**.
    * Click `+ New Template`.
    * Give it a name (e.g., "AC Bulb Switch").
    * Select `ESP8266` as the hardware.
    * Select `Wi-Fi` as the connection type. Click `Done`.
4.  **Create a Datastream:**
    * In your newly created template, go to the `Datastreams` tab.
    * Click `+ New Datastream` -> `Virtual Pin`.
    * Choose a Virtual Pin (e.g., `V0`).
    * Set `DATA TYPE` to `Integer`, `MIN` to `0`, `MAX` to `1`.
    * Give it a name (e.g., "Bulb State"). Click `Create`.
5.  **Set up Web Dashboard (Optional but Recommended):**
    * Go to the `Web Dashboard` tab within your template.
    * Drag a `Switch` widget onto the canvas.
    * Click on the switch settings (gear icon) and assign it to the `Bulb State (V0)` datastream you just created.
    * Set `ON VALUE` to `1` and `OFF VALUE` to `0`.
6.  **Set up Mobile Dashboard:**
    * Open the Blynk app on your phone.
    * Switch to `Developer Mode` (spanner icon in the top right).
    * Find your "AC Bulb Switch" template and tap on it.
    * Tap the `+` icon to add a widget.
    * Add a `Button` widget.
    * Tap on the button to configure it:
        * `Name`: AC Bulb Control (or anything you like)
        * `Datastream`: Select `V0` (Bulb State)
        * `MODE`: Switch
        * `ON Label`: ON
        * `OFF Label`: OFF
    * Go back to the project by tapping the back arrow.
7.  **Get Auth Token:** In your Blynk template settings (under `Info` or `Device Info`), you'll find the **BLYNK_AUTH_TOKEN**. Copy this token, you'll need it for the Arduino code.

## 💻 Arduino IDE Setup

1.  **Install ESP8266 Board Manager:**
    * Open Arduino IDE.
    * Go to `File` > `Preferences`.
    * In "Additional Board Manager URLs," add: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
    * Go to `Tools` > `Board` > `Boards Manager...`
    * Search for "esp8266" and install the `esp8266 by ESP8266 Community` package.
2.  **Install Blynk Library:**
    * Go to `Sketch` > `Include Library` > `Manage Libraries...`
    * Search for "Blynk" and install the `Blynk by Volodymyr Shymanskyy` library.
3.  **Select Your Board:**
    * Go to `Tools` > `Board` and select your specific ESP8266 board (e.g., "NodeMCU 1.0 (ESP-12E Module)").
    * Select the correct `Port` for your ESP8266.

## 📁 Code


**Before uploading, remember to replace the placeholders:**
* `BLYNK_TEMPLATE_ID`: Found in your Blynk template settings.
* `BLYNK_DEVICE_NAME`: Found in your Blynk template settings.
* `BLYNK_AUTH_TOKEN`: The Auth Token you copied from Blynk.
* `"Your_WiFi_SSID"`: Your Wi-Fi network name.
* `"Your_WiFi_Password"`: Your Wi-Fi password.
* `RELAY_PIN`: The GPIO pin you connected the `IN` of the relay module to (e.g., `D1` which is `GPIO5` on NodeMCU).

## 🚀 Usage
Wire up your components CAREFULLY according to the circuit diagram, prioritizing safety for AC connections. Ensure all power is OFF during wiring.

Upload the code to your ESP8266 board using the Arduino IDE.

Open the Serial Monitor in Arduino IDE (Tools > Serial Monitor) to monitor connection status and debug messages. Set the baud rate to 9600.

Connect AC power to your circuit ONLY AFTER all wiring is thoroughly checked and confirmed correct. Do not touch any wires once power is applied.

Open the Blynk app on your smartphone.

Run your project (the play button in the app).

Toggle the button widget to turn your AC LED bulb ON and OFF!


