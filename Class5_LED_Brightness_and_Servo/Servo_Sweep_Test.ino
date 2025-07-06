#include <Servo.h>       // Include the Servo library

Servo myServo;           // Create servo object

void setup() {
  myServo.attach(9);     // Attach servo signal wire to pin 9
}

void loop() {
  // Move from 0° to 180°
  for (int angle = 0; angle <= 180; angle += 1) {
    myServo.write(angle);   // Rotate to angle
    delay(15);              // Wait to allow movement
  }

  delay(1000); // Wait 1 second at 180°

  // Move from 180° to 0°
  for (int angle = 180; angle >= 0; angle -= 1) {
    myServo.write(angle);   // Rotate to angle
    delay(15);              // Wait to allow movement
  }

  delay(1000); // Wait 1 second at 0°
}
