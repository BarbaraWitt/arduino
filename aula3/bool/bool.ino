/**
   Exemplo de uso de variavel do tipo booleano
   @author BabbyWitt
*/
//Variavel global do tipo Booleana como apoio a logica

bool led = false;

void setup() {
  pinMode (2, INPUT);
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead (2) == HIGH && led == false) {
    digitalWrite (13, HIGH);
    led = true;
  }
  if (digitalRead (2) == HIGH && led == true) {
    digitalWrite (13, LOW);
    led = false;
  }
}
