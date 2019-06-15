/*
 * motor.cpp
 *
 *  Created on: Jun 6, 2019
 *      Author: bro
 */
#include "Arduino.h"
#include "motor_controller.h"


 motor_controller::motor_controller() {

   //Direction	Digital 12	Digital 13
   //Speed (PWM)	Digital 3	Digital 11
   //Brake	Digital 9	Digital 8

    //Setup Channel A
    pinMode(12, OUTPUT); //Initiates Motor Channel A pin
    pinMode(9, OUTPUT); //Initiates Brake Channel A pin
    pinMode(3, OUTPUT); //Initiates Speed(PWM) Channel A pin

    //Setup Channel B
    pinMode(13, OUTPUT); //Initiates Motor Channel B pin
    pinMode(8, OUTPUT);  //Initiates Brake Channel B pin
    pinMode(11, OUTPUT); //Initiates Speed(PWM) Channel B pin
}

//move_forward in full speed
void motor_controller::move_forward()
{
   digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
   analogWrite(3,255);
   analogWrite(11,255);
  }

//move right
void motor_controller::move_right()
{
   digitalWrite(12, HIGH);
   analogWrite(3,123);
   digitalWrite(13, LOW);
   analogWrite(11,123);
  }

//move left
void motor_controller::move_left()
{
   digitalWrite(12, LOW);
   analogWrite(3,123);
   digitalWrite(13, HIGH);
   analogWrite(11,123);
  }
}

//stop
void motor_controller::brake()
{
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
}
