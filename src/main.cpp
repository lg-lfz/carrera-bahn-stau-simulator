#include <Arduino.h>

// Interne LED Pin (auf dem D1 Mini ist das GPIO2/D4)
#define LED_BUILTIN 2

void setup() {
  // Serielle Kommunikation starten
  Serial.begin(115200);
  
  // LED Pin als Output konfigurieren
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Warten bis Serial bereit ist
  delay(1000);
  
  Serial.println();
  Serial.println("Hello World from ESP8266 Mini D1!");
  Serial.println("LED Blink Demo gestartet...");
}

void loop() {
  // LED einschalten (LOW = an, da die interne LED invertiert ist)
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED AN");
  delay(100);
  
  // LED ausschalten (HIGH = aus)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED AUS");
  delay(100);
}