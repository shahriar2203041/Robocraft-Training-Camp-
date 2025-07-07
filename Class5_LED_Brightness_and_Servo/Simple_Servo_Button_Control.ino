#include <Servo.h>

Servo myServo;

int pos = 90;         // Initial servo position
int buttonCW = 2;     // Clockwise button
int buttonCCW = 3;    // Counter-clockwise button

void setup() {
  myServo.attach(9);           // Servo on pin 9
  pinMode(buttonCW, INPUT_PULLUP);
  pinMode(buttonCCW, INPUT_PULLUP);
  myServo.write(pos);          // Set initial position
}

void loop() {
  if (digitalRead(buttonCW) == LOW) {  // Button pressed
    if (pos < 180) {
      pos += 10;
      myServo.write(pos);
      delay(300); // Simple debounce
    }
  }

  if (digitalRead(buttonCCW) == LOW) {
    if (pos > 0) {
      pos -= 10;
      myServo.write(pos);
      delay(300);
    }
  }
}
