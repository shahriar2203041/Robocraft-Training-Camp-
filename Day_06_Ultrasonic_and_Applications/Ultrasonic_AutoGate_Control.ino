#include <Servo.h>

// Define pins
const int trigPin = 5;      // Ultrasonic sensor trigger pin
const int echoPin = 6;      // Ultrasonic sensor echo pin
const int servoPin = 7;     // Servo motor control pin

Servo gateServo;            // Create servo object

void setup() {
  pinMode(trigPin, OUTPUT);   // Set trigger pin as output
  pinMode(echoPin, INPUT);    // Set echo pin as input
  gateServo.attach(servoPin); // Connect servo to pin 7
  Serial.begin(9600);         // Start serial communication
  gateServo.write(0);         // Close gate at start (0 degrees)
}

void loop() {
  float distance = measureDistance();  // Get distance from sensor

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // If something is closer than 20 cm and distance is valid
  if (distance > 0 && distance < 20) {
    gateServo.write(90);   // Open gate (90 degrees)
    delay(3000);           // Keep gate open for 3 seconds
    gateServo.write(0);    // Close gate
    delay(1000);           // Wait before next reading
  }
}

// Function to measure distance using ultrasonic sensor
float measureDistance() {
  digitalWrite(trigPin, LOW);        // Make sure trigger pin is low
  delayMicroseconds(2);              // Wait a short time

  digitalWrite(trigPin, HIGH);       // Send a 10 microsecond pulse
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);        // Stop the pulse

  long duration = pulseIn(echoPin, HIGH); // Measure how long the echo pin stays HIGH

  // Calculate distance in cm (speed of sound 0.0343 cm/us, divide by 2 for round trip)
  float distance = duration * 0.0343 / 2;
  return distance;                   // Return the distance value
}
