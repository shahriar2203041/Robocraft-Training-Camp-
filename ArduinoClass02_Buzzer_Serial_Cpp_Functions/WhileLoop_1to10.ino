int i = 1;

void setup() {
  Serial.begin(9600);

  Serial.println("Using while loop:");
  while (i <= 10) {
    Serial.println(i);
    i++;
  }
}

void loop() {
  // Empty
}
