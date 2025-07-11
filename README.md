# carrera-bahn-stau-simulator

## Software zum Programmieren

### Git

Um unser Projekt von Github.com auf unseren Rechner zu *clonen* brauchen wir **git**.

Der Download ist hier:
https://git-scm.com/downloads

Hast Du **Git** installiert, so musst Du es noch konfigurieren.
Öffne dazu die *Git Bash* und tippe folgendes in die Konsole ein:

```bash
git config --global user.name "Dein Name"
git config --global user.email "deineMail@provider.com"
```

Damit haben wir **Git** konfiguriert und können weiter machen.

### Visual Studio Code 

**Visual Studio Code** ist die Entwicklungsumgebung (IDE).

Der Download ist hier:
https://code.visualstudio.com/

In der Entwicklungsumgebung gibt es eine Extension, die wir installieren: PlatformIO.
Auf der linken Seite von der Entwicklungsumgebung findet man *Extensions*, dort kann man PlatformIO suchen und installieren.

### CH340 Treiber für USB2Serial

Der ESP8266 D1 mini hat einen USB2Serial Chip verbaut. Dies ist normalerweise der CH340.
Für diesen Chip braucht man unter Windows einen Treiber, den man hier downloaden kann:

https://www.wemos.cc/en/latest/ch340_driver.html

Nach dem Download musst Du das Zip-Archiv entpacken und die *Setup.exe* starten.
Dann wird der Treiber für den Chip installiert.

Hast Du den ESP8266 D1 mini im PC eingesteckt, sollte im Gerätemanager so ein Eintrag erscheinen:

![CH340 Chip im Gerätemanager richtig erkannt](./assets/geraetemanager.png)

Ziehst Du den ESP8266 vom USB-Port ab, sollte der Eintrag verschwinden.

## Aufbau

Hier der Aufbau in einem Drawing von ExcalDraw:
<https://excalidraw.com/#room=24f6770fdbf78b3d32c7,81xEUfPUe7m3yJ3ZLXmCHA>

## Einkaufsliste

RFID-Tags (20 Stück)
[https://funduinoshop.com/elektronische-module/wireless-iot/rfid-nfc/nfc-rfid-tag-mini-ntag213-oe-8mm](https://funduinoshop.com/elektronische-module/wireless-iot/rfid-nfc/nfc-rfid-tag-mini-ntag213-oe-8mm)

RFID-Reader (6 Stück)
[https://funduinoshop.com/en/electronic-modules/wireless-iot/rfid-nfc/pn532-nfc-rfid-v3-module-for-arduino-and-co.](https://funduinoshop.com/en/electronic-modules/wireless-iot/rfid-nfc/pn532-nfc-rfid-v3-module-for-arduino-and-co.)

Beschleunigungssensor (6 Stück)
[https://funduinoshop.com/en/electronic-modules/sensors/movement-distance/mpu-6050-module-triaxial-acceleration-sensor-gyroscope](https://funduinoshop.com/en/electronic-modules/sensors/movement-distance/mpu-6050-module-triaxial-acceleration-sensor-gyroscope)

ESP8266 mini (6 Stück)
[https://funduinoshop.com/en/electronic-modules/wireless-iot/esp-wifi/wemos-d1-mini-nodemcu-lua-wifi-esp8266-development-board](https://funduinoshop.com/en/electronic-modules/wireless-iot/esp-wifi/wemos-d1-mini-nodemcu-lua-wifi-esp8266-development-board)


## Todo

### Versuchsaufbau machen

- Tags an genauer Position festkleben
- ...



