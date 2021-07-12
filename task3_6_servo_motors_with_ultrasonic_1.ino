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
 
  
  pinMode(10,OUTPUT);
}

void loop()
{
  //initial position
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
  s5.write(0);
  s6.write(0);
  digitalWrite(10,LOW);
  
  long time1,time2,cm;
 // Reads and returns the sound wave travel time in microseconds
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  delayMicroseconds(2);
  digitalWrite(9, HIGH);
  delayMicroseconds(5);
  digitalWrite(9, LOW);

  pinMode(9, INPUT);
  time1 = pulseIn(9, HIGH);
  
  // change from time to cm
  cm = time1/ 29 / 2;
 
  delay(3000);// wait for 3 secs before sending the signal to the led
 
  // Reads and returns the sound wave travel time in microseconds again
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  delayMicroseconds(2);
  digitalWrite(9, HIGH);
  delayMicroseconds(5);
  digitalWrite(9, LOW);

  pinMode(9, INPUT);
  time2 = pulseIn(9, HIGH);
 
 
  
  
 
  
  // to make sure the objecive is standing 3 secs or more
  if((cm>=50&&70>=cm)&&(time1==time2)){
   	 digitalWrite(10,HIGH);
  
 
  
  
  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);
  s5.write(90);
  s6.write(90);
  
  delay(5000);
  
    
  }
  
  else{
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
  s5.write(0);
  s6.write(0);
    digitalWrite(10,LOW); }
 
  
}



  
  
  
 
  