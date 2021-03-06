#include <Stepper.h>
const int stepsPerRevolution = 2048;
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);
void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(15);
  
  // Begin Serial communication at a baud rate of 9600:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
  
  // Step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
