/**
   Estudo das estruturas de controle condicional
   @autor BabbyWitt
*/
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int idade = 18;
  if (idade < 18) {
    Serial.print ("Menor de idade");
  }
  else {
    Serial.print ("Maior de idade");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
