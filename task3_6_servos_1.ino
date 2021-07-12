// C++ code
//
#include <Servo.h>
Servo s1,s2,s3,s4,s5,s6;
void setup()
{
  //*Attaches the Servoes to the pins.
  s1.attach(3);
  s2.attach(4);
  s3.attach(5);
  s4.attach(8);
  s5.attach(7);
  s6.attach(6);
}

void loop()
{
 //Three different movments
  
  //1-Robot is off
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
  s5.write(0);
  s6.write(0);
  
  delay(2000);
  
 
  
  //2-when the robot is smiling
  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);
  s5.write(90);
  s6.write(90);
  
  delay(2000);
  
  //3-when the robot is sad
  s1.write(270);
  s2.write(270);
  s3.write(270);
  s4.write(270);
  s5.write(270);
  s6.write(270);
  
  delay(2000);
}