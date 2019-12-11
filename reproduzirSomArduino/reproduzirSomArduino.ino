/**
   Reproduzindo Som com Arduino
   @author BabbyWitt
*/

void setup() {
  pinMode (7, OUTPUT);
  tone (7, 660);
  delay (100);
  noTone (7);
  tone (7, 660);
  delay (100);
  noTone (7);
  tone (7, 660);
  delay (100);
  noTone (7);

}

void loop() {

}
