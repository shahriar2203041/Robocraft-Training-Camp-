int ledPin = 7;     // Choose your LED pin
int buzzerPin = 8;  // Choose your buzzer pin

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // LED ON + Buzzer Beep
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(300);  // Beep & light ON for 300ms

  // LED OFF + Buzzer OFF
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);
  delay(300);  // Pause for 300ms
}
