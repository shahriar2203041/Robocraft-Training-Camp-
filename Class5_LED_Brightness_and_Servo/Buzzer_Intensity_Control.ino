int potPin = A0;     // Potentiometer connected to A0
int buzzerPin = 9;   // Buzzer connected to pin 9 (PWM)
int potValue = 0;    // To store potentiometer value
int soundLevel = 0;  // PWM value for buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);                 // Read potentiometer (0–1023)
  soundLevel = map(potValue, 0, 1023, 0, 255);   // Map to PWM range (0–255)
  analogWrite(buzzerPin, soundLevel);            // Set buzzer intensity
  delay(10);  // Small delay for smoother change
}
