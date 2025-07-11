int wert;
int zaehler;
float zeit1;
float zeit2;
float differenz;
float Kmh;
float ms;
float strecke=0;


void setup() {
  Serial.begin(9600);
  int zaehler = 1;

}
void loop() {
  zeit1=millis();
  wert = analogRead(A0);
  while (wert >= 450) {
    wert = analogRead(A0);
  }
  zaehler++;
  while (wert <= 450) {
    wert = analogRead(A0);
  }
  strecke=strecke+4.58;
  zeit2=millis();
  differenz = zeit2-zeit1;
  //Serial.println(zaehler);
  ms = 0.0458/(differenz/1000);
  Serial.print("Strecke:  "); Serial.print(strecke);Serial.print("  Geschwindigkeit:  ");Serial.println(ms);
}
