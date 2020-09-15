/*
 Name:    DC_MOTOR_MOVEMENT_PROJECT
 Created: 15.09.2020 12:00:
 Author:  Huseyin Kaya
*/
#include <Arduino.h>

#define motor_direction_pin1 8 
#define motor_direction_pin2 9
#define motor_speed_pin 10

void setup()
{
   pinMode(motor_direction_pin1, OUTPUT);
   pinMode(motor_direction_pin2, OUTPUT);
   pinMode(motor_speed_pin, OUTPUT);
}


void loop()
{
  // İF YOU WANT CHANGE THE SPEED WRITE A SMALL ISSUE IN PLACE OF '255'
  
  digitalWrite(motor_direction_pin1, LOW);   
  digitalWrite(motor_direction_pin2, HIGH);                                            
  analogWrite(motor_speed_pin , 255);
  
   //İF YOU WANT CHANGE DIRECTION OF ROTATION USE THİS CODE
   
  //digitalWrite(motor_direction_pin1, HIGH);
  //digitalWrite(motor_direction_pin2, LOW);
  //analogWrite(motor_speed_pin , 255);
}
