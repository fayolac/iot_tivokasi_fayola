#include <Arduino.h>

const int greenLight = 33;
const int yellowLight = 25;
const int redLight = 26;

void setup() {
  pinMode(greenLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(redLight, OUTPUT);
}

void loop() {
  // Merah menyala selama 5 detik
  digitalWrite(redLight, HIGH);
  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, LOW);
  Serial.println("Lampu Merah ON");
  delay(3000);
  
  // Kuning menyala selama 2 detik
  digitalWrite(redLight, LOW);
  digitalWrite(yellowLight, HIGH);
  digitalWrite(greenLight, LOW);
  Serial.println("Lampu Kuning ON");
  delay(3000);
  
  // Hijau menyala selama 5 detik
  digitalWrite(redLight, LOW);
  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, HIGH);
  Serial.println("Lampu Hijau ON");
  delay(3000);
}
