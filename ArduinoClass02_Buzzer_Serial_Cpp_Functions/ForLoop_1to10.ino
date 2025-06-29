void setup() {
  Serial.begin(9600);
  
  Serial.println("Using for loop:");
  for (int i = 1; i <= 10; i++) {
    Serial.println(i);
  }
}

void loop() {
  // Empty
}
