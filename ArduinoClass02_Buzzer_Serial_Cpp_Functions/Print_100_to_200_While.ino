void setup() {
  Serial.begin(9600);
  int i = 100;
  while (i <= 200) {
    Serial.println(i);
    i++;
  }
}

void loop() {
  // Nothing here
}
