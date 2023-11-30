#include <Stepper.h>
 
Stepper myStepper(64, 8, 9, 10, 11);
 
void setup() {
  myStepper.setSpeed(400);
}
 
void loop() {  
  myStepper.step(64*32);
  delay(1000);
}