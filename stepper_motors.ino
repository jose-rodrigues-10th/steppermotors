#include <Servo.h>

Servo servo_1;

int buttonState = 3;   

void setup()
{

  pinMode(A1, INPUT);
 
  pinMode(8, INPUT);
  pinMode(9, INPUT);

  
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
  servo_1.attach(8);
  servo_1.write(3);  

}

void loop() {
  int buttonState2 = digitalRead(8);
  int buttonState3 = digitalRead(9);

  if (buttonState2 == HIGH) {
    servo_1.write(3);
   
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    
  } else if(buttonState3 == HIGH){
    servo_1.write(150);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    
  }



}
