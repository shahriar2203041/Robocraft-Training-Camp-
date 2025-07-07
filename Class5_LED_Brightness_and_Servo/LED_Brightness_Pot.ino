int potPin = A0;      // Potentiometer connected to A0
int ledPin = 9;       // LED connected to PWM pin 9

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);                 // Read potentiometer (0–1023)
  int brightness = map(potValue, 0, 1023, 0, 255);   // Convert to 0–255 for PWM

  analogWrite(ledPin, brightness);                   // Set LED brightness

  delay(10);  // Optional: small delay for smoother transition
}
