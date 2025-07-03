char input;
int ledPin = 8;  // LED connected to pin 8

void setup() {
  Serial.begin(9600);       // Start serial communication
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.read();  // Read incoming character

    if (input == 'a') {
      digitalWrite(ledPin, HIGH);  // Turn LED ON
    } else if (input == 'b') {
      digitalWrite(ledPin, LOW);   // Turn LED OFF
    }
  }
}
