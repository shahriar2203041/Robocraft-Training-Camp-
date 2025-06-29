int temp = 25;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (temp > 27) {
    Serial.println("High Temperature");
  } else {
    Serial.println("Low Temperature");
  }
  delay(1000); // Wait 1 second before repeating
}
