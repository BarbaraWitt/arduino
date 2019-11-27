/**
   Atividade 2:
   Cancela monitorada (Servo + Bottons)
   @author BabbyWitt
*/

#include <Servo.h>
Servo servo1;

void setup() {
  servo1.attach (9);
  pinMode (4, INPUT);
  pinMode (2, INPUT);

}

void loop() {
  if( digitalRead (2) == HIGH){
    servo1.write (0);
  }
 
 else{
  servo1.write (90);
 }

}
