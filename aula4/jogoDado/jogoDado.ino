/**
   Exemplo de uso da estrutura do while
   @author BabbyWitt
*/
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  char novo = 'n'; // char variavel que aceita 1 caractere qualquer
  do {
    randomSeed (analogRead (A0));
    int face = random(6) + 1; //gerador de números aleatórios (0 1 2 3 4 5)
    Serial.println ("===== JOGO DO DADO =====");
    Serial.print("Face :");
    Serial.println (face);
    Serial.println ("deseja jogar novamente(s/n)?");
    novo = Serial.read();
  } while (novo == 's');
}

void loop() {
  // put your main code here, to run repeatedly:

}
