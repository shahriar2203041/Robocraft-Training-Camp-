void setup() {
  Serial.begin(9600);
  int i = 1;
  while (i <= 500) {
    Serial.println(i);
    i++;
  }
}

void loop() {
  // Nothing here
}
