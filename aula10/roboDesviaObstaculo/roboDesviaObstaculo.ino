/**
   Robô desvia obstaculo]
   @author BabbyWitt
*/

#include <Ultrasonic.h>
Ultrasonic sonar (12, 13);
int distancia;

void setup() {
  Serial.begin (9600);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
}

void loop() {
  distancia = sonar.read();
  Serial.println (distancia);
  
  if (distancia < 30) {
    parar();
    delay(500);
    direita();
    delay(500);
  }
  else{
    frente();
  }
  if (distancia < 20){
    re();
    delay (300);
    parar();
    delay(200);
    redireita();
    delay (300);
  }
  else{
    frente();
  }
  

}

/* função parar */
// analoWrite -> ativar o uso do PWM na saída digital
// analogWrite (pino, valor) valor (0 a 255)
void parar() {
  digitalWrite (5, LOW);//esquerdo
  digitalWrite (6, LOW);
  digitalWrite (9, LOW);//direito
  digitalWrite (10, LOW);
}
/*função seguir em frente*/
void frente() {
  analogWrite (6, 185);
  digitalWrite (5, LOW);
  analogWrite (9, 165);
  digitalWrite (10, LOW);
}

/*função virar a direita*/
void direita() {
  analogWrite (6, 200);
  digitalWrite (5, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
}

void re(){
  analogWrite (5, 185);
  digitalWrite (6, LOW);
  analogWrite (10, 165);
  digitalWrite (9, LOW); 
}

void redireita(){
  analogWrite (5, 200);
  digitalWrite (6, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
}
