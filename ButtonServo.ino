#include <Servo.h>

Servo s; 
int pos = 0; 
int buttonState1 = 0;
int buttonState2 = 0;

void setup ()
{
  s.attach(6);
  pinMode(10, INPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
  
}

void loop() {

  buttonState1 = digitalRead(2);
  buttonState2 = digitalRead(3);
  
  s.write(0); 
  if (buttonState1 == HIGH) {
    pos+=90; 
    s.write(pos);
  }
  
  if (buttonState2 == HIGH) {
    pos-=90;
    s.write(pos);
    
  }

  delay(500);
}
