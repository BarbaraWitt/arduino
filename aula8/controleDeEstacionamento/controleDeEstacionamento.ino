/**
   Atividade 1: Controle de Estacionamento
*/

#include <Ultrasonic.h>
Ultrasonic sonar (12, 13);
int distance;

void setup() {
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  distance = sonar.read();
  delay (500);
  if (distance < 10) {
    digitalWrite (2, HIGH);
    digitalWrite (3, LOW);
    Serial.println ("OCUPADO");
    Serial.print ("");
  }
  else {
    digitalWrite (2, LOW);
    digitalWrite (3, HIGH);
    Serial.println ("LIVRE");
    Serial.print ("");
  }
}
