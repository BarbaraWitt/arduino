/**
   Atividade 1:
   Alerta de distancia (sensor ultrassonico + LED)
   @author BabbyWitt
*/

#include <Ultrasonic.h>

Ultrasonic sonar (12, 13);
int distancia;

void setup() {
  Serial.begin (9600);
  pinMode (8, OUTPUT);
}

void loop() {
  distancia = sonar.read();
  Serial.print("Distance in CM: ");
  Serial.println(distancia);

  if (distancia < 30) {
    digitalWrite (8, HIGH);
  }
  else {
    digitalWrite (8, LOW);
  }

}
