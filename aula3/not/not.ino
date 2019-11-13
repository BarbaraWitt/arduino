/**
    Exemplo do operador logico NOT
    @BabbyWitt
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (13, OUTPUT);
  pinMode (2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(2));
  if (digitalRead (2) == HIGH) {
    digitalWrite (13, ! digitalRead(13));
    delay(500);
  }
}
