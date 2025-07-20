#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3WMMP9T5B"
#define BLYNK_TEMPLATE_NAME "RealTime Weather Station"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

// Replace with your Blynk Auth Token
char auth[] = "L8GjuCt8TEbMHS9isu1zV3jcwdyuEzUP"; 

// Replace with your WiFi credentials
char ssid[] = "JioFiber-Home";
char pass[] = "Jiofiber@9876";

// DHT settings
#define DHTPIN D2           // GPIO4 (D2 on NodeMCU)
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Timer for sending data to Blynk
BlynkTimer timer;

void sendSensorData() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); // Celsius

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Send to Blynk virtual pins
  Blynk.virtualWrite(V0, temperature);
  Blynk.virtualWrite(V1, humidity);

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  
  // Send data every 2 seconds
  timer.setInterval(2000L, sendSensorData);
}

void loop() {
  Blynk.run();
  timer.run();
}
