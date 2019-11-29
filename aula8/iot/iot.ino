/**
 * IOT - Leitura de um sonar no APP
 * @author BabbyWitt
 */

 #include <Ultrasonic.h>
 Ultrasonic sonar (12,13);
 int distancia;
 
void setup() {
 Serial.begin (9600);

}

void loop() {
  distancia = sonar.read();
  Serial.println (distancia);
  Serial.print ("");
  delay (500);
}
