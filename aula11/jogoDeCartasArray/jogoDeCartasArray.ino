/**
 * Estudo do Array vetor - Jogo de Cartas
 * @author BabbyWitt
 */
 
void setup() {
  Serial.begin (9600);
  String faces [] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
  String naipes [] = {"♦","♠","♥","♣"};
  randomSeed(analogRead(A0));
  int f = random(13);
  int n = random(4);
  Serial.print (faces [f]);
  Serial.println (naipes [n]);
}

void loop() {
  // put your main code here, to run repeatedly:

}
