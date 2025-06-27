void setup() {
  pinMode(9, OUTPUT);   // a
  pinMode(10, OUTPUT);  // b
  pinMode(11, OUTPUT);  // c
  pinMode(5, OUTPUT);   // d
  pinMode(3, OUTPUT);   // e
  pinMode(6, OUTPUT);   // f
  pinMode(4, OUTPUT);   // g
}

void loop() {
  showDigit0();
  delay(1000);
  clearDisplay();
  delay(500);

  showDigit1();
  delay(1000);
  clearDisplay();
  delay(500);

  showDigit2();
  delay(1000);
  clearDisplay();
  delay(500);
}

void showDigit0() {
  digitalWrite(9, HIGH);   // a ON
  digitalWrite(10, HIGH);  // b ON
  digitalWrite(11, HIGH);  // c ON
  digitalWrite(5, HIGH);   // d ON
  digitalWrite(3, HIGH);   // e ON
  digitalWrite(6, HIGH);   // f ON
  digitalWrite(4, LOW);    // g OFF
}

void showDigit1() {
  digitalWrite(9, LOW);    // a OFF
  digitalWrite(10, HIGH);  // b ON
  digitalWrite(11, HIGH);  // c ON
  digitalWrite(5, LOW);    // d OFF
  digitalWrite(3, LOW);    // e OFF
  digitalWrite(6, LOW);    // f OFF
  digitalWrite(4, LOW);    // g OFF
}

void showDigit2() {
  digitalWrite(9, HIGH);   // a ON
  digitalWrite(10, HIGH);  // b ON
  digitalWrite(11, LOW);   // c OFF
  digitalWrite(5, HIGH);   // d ON
  digitalWrite(3, HIGH);   // e ON
  digitalWrite(6, LOW);    // f OFF
  digitalWrite(4, HIGH);   // g ON
}

void clearDisplay() {
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
}
