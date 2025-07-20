#define BLYNK_TEMPLATE_ID "TMPL34czgrjc1"
#define BLYNK_TEMPLATE_NAME "RGB LED Control"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

// Replace with your Blynk Auth Token
char auth[] = "4-wUqxoeE_upFHD9mrelQWWclI2Vzwzq"; 

// Replace with your WiFi credentials
char ssid[] = "JioFiber-Home";
char pass[] = "Jiofiber@9876";


// RGB LED pins
#define RED_PIN    D1   // GPIO5
#define GREEN_PIN  D2   // GPIO4
#define BLUE_PIN   D3   // GPIO0

void setup() {
  Serial.begin(9600);

  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  Blynk.begin(auth, ssid, pass);
}

// Virtual pin handlers
BLYNK_WRITE(V0) {
  int r = param.asInt();  // Get value from Blynk slider
  analogWrite(RED_PIN,r);  // Invert if common anode
}

BLYNK_WRITE(V1) {
  int g = param.asInt();
  analogWrite(GREEN_PIN,g);
}

BLYNK_WRITE(V2) {
  int b = param.asInt();
  analogWrite(BLUE_PIN,b);
}

void loop() {
  Blynk.run();
}
