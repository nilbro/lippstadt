/*
 * motor.h
 *
 *  Created on: Jun 6, 2019
 *      Author: bro
 */



#ifndef MOTOR_CONTROLLER_H_
#define MOTOR_CONTROLLER_H_

#include "Arduino.h"

class motor_controller {
public:
  motor_controller();
  void move_forward();
  void move_right();
  void move_left();
  void brake();
};

#endif /* MOTOR_CONTROLLER_H_ */
