#define BLYNK_TEMPLATE_ID "TMPL3C1CAbyyG"
#define BLYNK_TEMPLATE_NAME "HomE Automation"
#define BLYNK_AUTH_TOKEN "Pc8klXGl4CNVL7MpCSGmKHQ3h4rrYxWZ"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// IMPORTANT: Double-check this pin mapping for your specific ESP8266 board (e.g., NodeMCU)
// D5 on NodeMCU maps to GPIO14.
int relayPin = 15; // Assuming you physically connected to the pin labeled D5 on your board


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "JioFiber-Home";
char pass[] = "Jiofiber@9876";

void setup()
{
  Serial.begin(9600);
  Serial.println("Starting Home Automation...");

  Blynk.begin(auth, ssid, pass);

  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, LOW); // Assuming you want the relay OFF initially
  Serial.println("Relay initialized to OFF");
}


BLYNK_WRITE(V1){
  int appValue = param.asInt(); // Get value from Blynk app (0 for OFF, 1 for ON)

  Serial.print("Blynk V1 received: ");
  Serial.println(appValue);

  
  if (appValue == 0) { 
    digitalWrite(relayPin, LOW); 
    Serial.println("Relay set to OFF (LOW signal)");
  } else { 
    digitalWrite(relayPin, HIGH); 
    Serial.println("Relay set to ON (HIGH signal)");
  }
}

void loop() {
  Blynk.run();
}