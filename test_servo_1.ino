
/*
Adafruit Arduino - Lesson 14. Sweep
*/

#include <Servo.h> 

int servoPin1 = 9;
int servoPin2 = 10;
//int servoPin3 = 11;
 
Servo servo1;
Servo servo2;

#define STEP 1
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo1.write(0);
  servo2.write(0);
} 

void loop() 
{ 
  //unfold
  for(angle = 0; angle < 90; angle+= STEP)  
  {                                  
    servo1.write(angle);               
    delay(30);                 
  } 
  
  delay(3000);
  
  for(angle = 0; angle < 90; angle+= STEP)  
  {                                  
    servo2.write(angle);               
    delay(30);                   
  } 
  
  delay(3000);
  
  // refold
  for(angle = 90; angle > 0; angle-= STEP)    
  {                                
    servo2.write(angle);           
    delay(30);       
  } 
  
  delay(1500);
  
  for(angle = 90; angle > 0; angle-= STEP)    
  {                                
    servo1.write(angle);           
    delay(30);       
  } 
  exit(0);
} 
