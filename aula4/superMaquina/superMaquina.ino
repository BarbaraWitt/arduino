/**
   @autor BabbyWitt
*/

void setup() {
  // put your setup code here, to run once:
  for (int p = 9; p<=13; p++){
    pinMode (p, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int efeito = 70;
  for (int i = 9; i < 14; i++) {
    digitalWrite (i, HIGH);
    delay (efeito);
    digitalWrite (i, LOW);
  }
  for (int i = 12; i > 9; i--) {
    digitalWrite (i, HIGH);
    delay (efeito);
    digitalWrite (i, LOW);
  }
}
