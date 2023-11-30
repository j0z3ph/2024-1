#include <Servo.h>
#define BAUD 9600
#define servo_pin 9 // analogico

String receivedString;
Servo servoMotor;
int angle = 0;

void setup() {
  Serial.begin(BAUD);
  servoMotor.attach(servo_pin);
}

void loop() {
  if (Serial.available() > 0) {
    receivedString = Serial.readStringUntil('\n');
    angle = atoi(receivedString.c_str());
    angle = angle < 0 ? 0 : angle > 180 ? 180 : angle;
    servoMotor.write(angle);
  }
}