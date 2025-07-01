char x;  // Variable to store the received character

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
}

void loop() {
  // Check if data is available from the Serial Monitor
  if (Serial.available() > 0) {
    
    x = Serial.read();  // Read one character from Serial input

    // Print label and the received character
    Serial.println("Received Data is:");
    Serial.println(x);
  }
}
