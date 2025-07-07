#include <Servo.h>  // Include the Servo library

Servo myServo;      // Create a servo object

int potPin = A0;    // Potentiometer connected to A0
int potValue;       // Variable to store potentiometer value
int angle;          // Mapped servo angle (0 to 180 degrees)

void setup() {
  myServo.attach(9);  // Attach the servo to pin 9
}

void loop() {
  potValue = analogRead(potPin);           // Read potentiometer (0–1023)
  angle = map(potValue, 0, 1023, 0, 180);  // Convert to 0–180 degrees
  myServo.write(angle);                   // Move servo to angle
  delay(15);                              // Small delay for smooth movement
}
