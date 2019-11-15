/**
   Estudo do laço for
   @author BabbyWitt
*/
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  for (int i = 10; i > 0; i--) {
    Serial.println(i);
    delay (1000);
  }
  Serial.println ("Ignição");
}

void loop() {
  // put your main code here, to run repeatedly:

}
