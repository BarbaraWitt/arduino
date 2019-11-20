/**
   Automação simples com arduino
   @author BabbyWitt
*/
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
}

void loop() {
  char leitor;
  //estrutura abaixo evita o acionamento indevido
  //dos dispositivos se não existir a comunicação
  if (Serial.available()) {
    leitor = Serial.read();
    switch (leitor) {
      case 'a':
        digitalWrite (13, ! digitalRead(13));
        break;
      case 's':
        digitalWrite (12, ! digitalRead(12));
        break;
    }
  }
}
