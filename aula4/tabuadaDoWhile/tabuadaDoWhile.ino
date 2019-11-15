/**
   Estudo do laço while / do while
   @author BabbyWitt
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  int valor = 7;
  int i = 1;
  while (i <= 10) {
    Serial.print (valor);
    Serial.print ("x");
    Serial.print (i);
    Serial.print ("=");
    Serial.println (valor * i);
    i++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
