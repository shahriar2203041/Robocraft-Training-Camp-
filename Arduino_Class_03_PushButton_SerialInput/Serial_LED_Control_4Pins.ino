char input;  // Character input from serial

int ledPin1 = 7;
int ledPin2 = 8;
int ledPin3 = 9;
int ledPin4 = 10;

void setup() {
  Serial.begin(9600);  // Start serial communication

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.read();  // Read the character

    // First clear all LEDs
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);

    // Then turn on based on new input
    if (input == '1') {
      digitalWrite(ledPin1, HIGH);
      delay(1000);
    } else if (input == '2') {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      delay(1000);
    } else if (input == '3') {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      delay(1000);
    } else if (input == '4') {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      delay(1000);
    }
  }
}
