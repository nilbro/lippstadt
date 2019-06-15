#include <Ultrasonic.h>
#include "motor_controller.h"

Ultrasonic frontDistance(3,2);
Ultrasonic rightDistance(5,4);
Ultrasonic leftDistance(7,6);
motor_controller motCon;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(frontDistance.distanceRead());
  if(frontDistance.distanceRead() <= 10)
  {
      //motCon.brake();
      Serial.println("Stop");
      delay(200);
  }

  else if (leftDistance.distanceRead() <= 10)
  {
   // motCon.move_right();
    Serial.println("Move Right");
    delay(200);
  }

  else if (rightDistance.distanceRead() <= 10)
  {
    //motCon.move_left();
    Serial.println("Move Left");
    delay(200);
  }

  else
  {
    //motCon.move_forward();
    Serial.println("Move Forward");
  }

  delay(500);
}
