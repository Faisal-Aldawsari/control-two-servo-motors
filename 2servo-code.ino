#include <Servo.h>

Servo  moto1;
Servo  moto2;
void setup(){
  
  moto1.attach(2); //motor1 connected to pin2 arduino
  
  moto2.attach(4);   //motor2 connected to pin4 arduino
}
void loop(){
  int x=90;
   int y=180;
  moto1.write(x); //motor1 will rotate at 180 degree
  moto2.write(y);   //motor1 will rotate at 90 degree
  
  delay(2000);
  x=0;           //all the motors will go back at the start point
  y=0;
  moto1.write(x);
 moto2.write(y);
    delay(2000);
}