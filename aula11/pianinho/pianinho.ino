/**
   pianinho
   @author BabbyWitt
*/

void setup() {
  pinMode (2, OUTPUT);//Led verde
  pinMode (3, OUTPUT); //Led vermelho
  pinMode (4, OUTPUT);//Led azul
  pinMode (5, OUTPUT);//Led amarelo
  pinMode (7, OUTPUT);//buzzer
  pinMode (8, INPUT); //verde
  pinMode (9, INPUT); //vermelho
  pinMode (10, INPUT);//azul
  pinMode (11, INPUT);//amarelo

}

void loop() {
  if ( digitalRead (8) == HIGH) {
    digitalWrite (2, HIGH);
    tone (7,262); //Dó
    delay (200);
  }
  else {
    digitalWrite (2, LOW);
    noTone (7);
  }
  if (digitalRead (9) == HIGH) {
    digitalWrite (3, HIGH);
  }
  else {
    digitalWrite (3, LOW);
    noTone (7);
  }
  if (digitalRead (10) == HIGH) {
    digitalWrite (4, HIGH);
  }
  else {
    digitalWrite (4, LOW);
    noTone (7);
  }
  if (digitalRead (11) == HIGH) {
    digitalWrite (5, HIGH);
  }
  else {
    digitalWrite (5, LOW);
    noTone (7);
  }
}
