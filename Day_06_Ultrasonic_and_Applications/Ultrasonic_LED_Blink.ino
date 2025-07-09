const int trigPin = 5;   // Ultrasonic trigger pin
const int echoPin = 6;   // Ultrasonic echo pin
const int ledPin = 13;   // LED pin

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Send pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time and calculate distance (in cm)
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Blink speed based on distance zone
  if (distance > 0 && distance < 10) {
    blinkLED(100);  // Very close = blink fast
  }
  else if (distance >= 10 && distance < 30) {
    blinkLED(300);  // Medium range = blink medium speed
  }
  else {
    blinkLED(700);  // Far = blink slow
  }
}

// Blinks the LED with delay time
void blinkLED(int delayTime) {
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}
