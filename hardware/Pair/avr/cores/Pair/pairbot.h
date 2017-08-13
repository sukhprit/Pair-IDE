/* 
 Copyright 2017 AJAY SONI (Email : ajay15014@gmail.com)
 Library Released Under GPLV3 Licence.
 
 // This library is based on L298D Motor driver.
 */
 #ifndef pairbot_h
 #define pairbot_h
#include<Arduino.h>
 class  Motor
 {
   public:
   Motor();
   Motor(byte pin1, byte pin2, byte C1, byte C2, byte C3, byte C4, byte led1, byte led2);
   void pair_pin();
   void s_motor(bool data_check1);
   void go_forward(bool data_check2);
   void go_backward(bool data_check3);
   void turn_right(bool data_check4);
   void turn_left(bool data_check5);
   void check_data(long serial);
   void stop(bool data_check6);
   void wait(int sec);
   void led_show(); 
   private:
  byte p1;
  byte p2;
  byte C_1;
  byte C_2;
  byte C_3;
  byte C_4;
  byte I_1;
  byte I_2;
  byte  waiting; 
  bool _default=0;
  bool s1=0;
 bool  s2=0;
  bool s3=0;
 bool  s4=0;
bool  s5=0;
 bool  s6=0;
 };
 #endif
