#include "pairbot.h"

Motor::Motor(byte pin1, byte pin2, byte C1, byte C2, byte C3, byte C4, byte led1, byte led2)
{
 p1=pin1;
 p2=pin2;
 C_1=C1;
 C_2=C2;
 C_3=C3;
 C_4=C4;
 I_1=led1;
 I_2=led2;
 pinMode(p1,OUTPUT);
 pinMode(p2,OUTPUT);
 pinMode(C_1,OUTPUT);
 pinMode(C_2,OUTPUT);
 pinMode(C_3,OUTPUT);
 pinMode(C_4,OUTPUT);
 pinMode(I_1,OUTPUT);
 pinMode(I_2,OUTPUT);
}
void Motor::pair_pin()
{
  Motor(1,2,3,4,5,6,7,8);
  Serial.begin(9600);
  Serial.println("Developed by :a AJAY SONI");
 _default=1;
}

void Motor::check_data(long )
{
  Serial.println("Serial Data Started on :9600 baud rate");
  delay(50);
  Serial.println("Developed By Ajay soni");
  delay(100);
  Serial.println(" ---- Welcome to the Robotics world data analyser ----"); 
  if(_default==true)
  {
     Serial.println("Default pin Activated on");
     Serial.print("Enable pin1  : 1");
     Serial.println("Enable pin2 : 2");
     Serial.println("----------Left Motor Control status---------") ;  
     Serial.println("Left motor(1A) pin : 3");
     Serial.println("Left motor(1A) pin : 4");
     Serial.println("Left motor(1A) pin : 5");
     Serial.println("Left motor(1A) pin : 6");
     Serial.println("LED STSTUS PINS :7,8");
 }else
 {
 Serial.println("Your are enter pins Manually");
 Serial.println("Left motor part :\t");
 Serial.print(C_1);
 Serial.print(",");
 Serial.print(C_2);
 Serial.print("\n Right Motor part :\t");
 Serial.print(C_3);
 Serial.print(",");
 Serial.print(C_4);
 }

}
void Motor::led_show()
{
 digitalWrite(I_1,HIGH);
 digitalWrite(I_2,HIGH); 
}
void Motor::go_forward(bool datacheck2)
{
      digitalWrite(p1,HIGH);
      digitalWrite(p1,HIGH);
      digitalWrite(C_1,HIGH);
      digitalWrite(C_2,LOW);
      digitalWrite(C_3,HIGH);
      digitalWrite(C_4,LOW);
      if(datacheck2==true)
      {
        Serial.println("Motor insit.....");
       Serial.println("Forward Direction of robot : 1");
      }
}
