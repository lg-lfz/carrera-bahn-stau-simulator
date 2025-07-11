#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_PN532.h>

// Interne LED Pin (auf dem D1 Mini ist das GPIO2/D4)
#define LED_BUILTIN 2

// PN532 SPI Pins
#define PN532_SCK  (14)  // D5
#define PN532_MISO (12)  // D6
#define PN532_MOSI (13)  // D7
#define PN532_SS   (0)  // D3

// PN532 über SPI initialisieren
Adafruit_PN532 nfc(PN532_SCK, PN532_MISO, PN532_MOSI, PN532_SS);

void setup() {
  // Serielle Kommunikation starten
  Serial.begin(115200);
  
  // LED Pin als Output konfigurieren
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Warten bis Serial bereit ist
  delay(1000);
  
  Serial.println();
  Serial.println("Hello World from ESP8266 Mini D1!");
  Serial.println("NFC/RFID Reader mit LED Blink Demo");
  Serial.println("====================================");
  
  // PN532 initialisieren
  nfc.begin();
  
  uint32_t versiondata = nfc.getFirmwareVersion();
  if (!versiondata) {
    Serial.println("PN532 Board nicht gefunden!");
    while (1); // Stopp hier wenn PN532 nicht gefunden
  }
  
  // PN532 gefunden, Version ausgeben
  Serial.print("PN532 gefunden! Firmware Version: ");
  Serial.print((versiondata>>24) & 0xFF, HEX); 
  Serial.print('.');
  Serial.println((versiondata>>16) & 0xFF, HEX);
  
  // Konfiguration für das Lesen von NFC Tags
  nfc.SAMConfig();
  
  Serial.println("Bereit für NFC/RFID Tags...");
  Serial.println("Halte eine Karte an den Reader!");
}

void loop() {
  // LED einschalten (LOW = an, da die interne LED invertiert ist)
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED AN - Suche nach NFC Tags...");
  
  // Nach NFC Tag suchen (mit Timeout)
  uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };
  uint8_t uidLength;
  
  // Versuche NFC Tag zu lesen (500ms Timeout)
  bool success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLength, 500);
  
  if (success) {
    Serial.println("NFC Tag gefunden!");
    Serial.print("UID Länge: "); Serial.print(uidLength, DEC); Serial.println(" bytes");
    Serial.print("UID Wert: ");
    for (uint8_t i = 0; i < uidLength; i++) {
      Serial.print(" 0x"); Serial.print(uid[i], HEX);
    }
    Serial.println("");
    Serial.println("====================================");
  }
  
  delay(500);
  
  // LED ausschalten (HIGH = aus)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED AUS");
  delay(500);
}