void setup() {
  Serial.begin(9600);
  int i = 300;
  while (i >= 100) {
    Serial.println(i);
    i--;
  }
}

void loop() {
  // Nothing here
}
