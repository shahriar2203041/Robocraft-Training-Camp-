void setup() {
  Serial.begin(9600);
  for (int i = 300; i >= 100; i--) {
    Serial.println(i);
  }
}

void loop() {
  // Nothing here
}
