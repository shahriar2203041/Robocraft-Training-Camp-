void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  // Beat 1: short beep
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);

  // Beat 2: long beep
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(8, LOW);
  delay(200);

  // Beat 3: short beep
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);

  // Beat 4: pause
  delay(500);
}
