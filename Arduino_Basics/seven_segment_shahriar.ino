void setup() {
  pinMode(4, OUTPUT);    // g
  pinMode(6, OUTPUT);    // f
  pinMode(9, OUTPUT);    // a
  pinMode(10, OUTPUT);   // b
  pinMode(5, OUTPUT);    // d
  pinMode(3, OUTPUT);    // c
  pinMode(11, OUTPUT);   // e
}

void loop() {
  showS();
  delay(1000);
  clearDisplay();
  delay(500);

  showH();
  delay(1000);
  clearDisplay();
  delay(500);

  showA();
  delay(1000);
  clearDisplay();
  delay(500);

  showH();
  delay(1000);
  clearDisplay();
  delay(500);

  showR();  // You didn't provide showR, so I'll use showA for R approximation
  delay(1000);
  clearDisplay();
  delay(500);

  showI();
  delay(1000);
  clearDisplay();
  delay(500);

  showA();
  delay(1000);
  clearDisplay();
  delay(500);

  showR();  // again approximation
  delay(1000);
  clearDisplay();
  delay(500);
}

// Your exact provided functions:

void showS() {
  digitalWrite(9, HIGH);   // a ON
  digitalWrite(6, HIGH);   // f ON
  digitalWrite(4, HIGH);   // g ON
  digitalWrite(3, HIGH);   // c ON
  digitalWrite(5, LOW);    // d ON (as per your comment)
  digitalWrite(10, LOW);   // b OFF
  digitalWrite(11, HIGH);  // e OFF (as per your comment)
}

void showH() {
  digitalWrite(9, LOW);    // a OFF
  digitalWrite(10, HIGH);  // b ON
  digitalWrite(3, LOW);    // c ON (your comment)
  digitalWrite(11, HIGH);  // e ON
  digitalWrite(6, HIGH);   // f ON
  digitalWrite(4, HIGH);   // g ON
  digitalWrite(5, HIGH);   // d OFF
}

void showA() {
  digitalWrite(9, HIGH);   // a ON
  digitalWrite(10, HIGH);  // b ON
  digitalWrite(3, LOW);    // c ON (your comment)
  digitalWrite(5, HIGH);   // d OFF
  digitalWrite(11, HIGH);  // e ON
  digitalWrite(6, HIGH);   // f ON
  digitalWrite(4, HIGH);   // g ON
}

void showI() {
  digitalWrite(9, LOW);    // a OFF
  digitalWrite(10, LOW);   // b OFF
  digitalWrite(3, LOW);    // c OFF
  digitalWrite(5, HIGH);   // d OFF (your comment)
  digitalWrite(11, LOW);   // e ON (your comment)
  digitalWrite(6, HIGH);   // f ON
  digitalWrite(4, LOW);    // g OFF
}

// Approximate R as A (since showR not provided)
void showR() {
  showA();
}

void clearDisplay() {
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
}
