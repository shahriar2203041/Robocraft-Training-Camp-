void setup() {
  Serial.begin(9600);
  for (int i = 1; i <= 500; i++) {
    Serial.println(i);
  }
}

void loop() {
  // Nothing here
}
