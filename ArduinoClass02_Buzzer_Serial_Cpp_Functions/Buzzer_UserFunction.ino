int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  buzzerOn();
  delay(500);
  buzzerOff();
  delay(500);
}

// User-defined function to turn the buzzer ON
void buzzerOn() {
  digitalWrite(buzzerPin, HIGH);
}

// User-defined function to turn the buzzer OFF
void buzzerOff() {
  digitalWrite(buzzerPin, LOW);
}
