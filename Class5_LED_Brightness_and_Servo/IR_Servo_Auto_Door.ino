#include <Servo.h>

Servo myServo;

int irPin = 2;        // IR sensor digital output pin
int irState = 0;      // To store the sensor state

void setup() {
  myServo.attach(9);        // Attach servo to pin 9
  pinMode(irPin, INPUT);    // Set IR pin as input
  myServo.write(0);         // Initial position (closed)
  Serial.begin(9600);
}

void loop() {
  irState = digitalRead(irPin);   // Read IR sensor

  if (irState == LOW) {
    // Object detected (IR beam reflected)
    myServo.write(90);     // Open door (adjust angle as needed)
    Serial.println("Object detected - Door Open");
  } else {
    // No object
    myServo.write(0);      // Close door
    Serial.println("No object - Door Closed");
  }

  delay(100);
}
