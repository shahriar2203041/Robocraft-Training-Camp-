void setup() {
  Serial.begin(9600);
  for (int i = 100; i <= 200; i++) {
    Serial.println(i);
  }
}

void loop() {
  // Nothing here
}
