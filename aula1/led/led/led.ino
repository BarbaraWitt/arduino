/**
 * Acionamento de um LED
 * @autor BabbyWitt
 */
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (13, HIGH);
  delay (500); //1000ms = 1s
  digitalWrite (13, LOW);
  delay (500); //1000ms = 1s
}
