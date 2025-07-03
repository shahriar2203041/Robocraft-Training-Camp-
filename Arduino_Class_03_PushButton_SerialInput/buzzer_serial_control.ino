char input;
int buzzer = 7;  // Buzzer connected to pin 7

void setup() {
  Serial.begin(9600);        // Start serial communication
  pinMode(buzzer, OUTPUT);   // Set buzzer pin as output
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.read();   // Read incoming character

    if (input == 'a') {
      digitalWrite(buzzer, HIGH);  // Turn buzzer ON
    } else if (input == 'b') {
      digitalWrite(buzzer, LOW);   // Turn buzzer OFF
    }
  }
}
