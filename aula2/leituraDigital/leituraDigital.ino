/**
   Leitura digital de um interruptor simples
   @autor BabbyWitt
*/

void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  pinMode (2, INPUT);
  pinMode (4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH){
    digitalWrite (13, HIGH);
  }

  if (digitalRead(4) == HIGH){
    digitalWrite (13, LOW);
  }

}
