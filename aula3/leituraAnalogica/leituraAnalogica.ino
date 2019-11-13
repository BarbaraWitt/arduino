/**
   Leitura Analógica
   LDR
   @author BabbyWitt
*/
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr = analogRead (A0);
  Serial.println(ldr);
  if (ldr <= 500) {
    digitalWrite (13, HIGH);
  }
  else {
    digitalWrite (13, LOW);
  }
}
