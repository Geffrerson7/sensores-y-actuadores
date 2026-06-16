#include <Servo.h>

Servo servoMotor;

void setup() {
  servoMotor.attach(9);
}

void loop() {

  for (int angulo = 0; angulo <= 180; angulo++) {
    servoMotor.write(angulo);
    delay(15);
  }

  for (int angulo = 180; angulo >= 0; angulo--) {
    servoMotor.write(angulo);
    delay(15);
  }

}