#define buzzerPin 8

void setup() {
  pinMode(2, OUTPUT);    // g
  pinMode(10, OUTPUT);   // f
  pinMode(6, OUTPUT);    // a
  pinMode(11, OUTPUT);   // b
  pinMode(3, OUTPUT);    // e
  pinMode(5, OUTPUT);    // d
  pinMode(9, OUTPUT);    // c

  pinMode(buzzerPin, OUTPUT);

  display0(); beep(); delay(1000);
  display1(); beep(); delay(1000);
  display2(); beep(); delay(1000);
  display3(); beep(); delay(1000);
  display4(); beep(); delay(1000);
  display5(); beep(); delay(1000);
  display6(); beep(); delay(1000);
  display7(); beep(); delay(1000);
  display8(); beep(); delay(1000);
  display9(); beep(); delay(1000);
}

void loop() {
  // Nothing here
}

void beep() {
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);
}

void display0() {
  digitalWrite(6, HIGH);  // a
  digitalWrite(11, HIGH); // b
  digitalWrite(9, HIGH);  // c
  digitalWrite(5, HIGH);  // d
  digitalWrite(3, HIGH);  // e
  digitalWrite(10, HIGH); // f
  digitalWrite(2, LOW);   // g off
}

void display1() {
  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(2, LOW);
}

void display2() {
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(2, HIGH);
}

void display3() {
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(2, HIGH);
}

void display4() {
  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
}

void display5() {
  digitalWrite(6, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
}

void display6() {
  digitalWrite(6, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
}

void display7() {
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(2, LOW);
}

void display8() {
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
}

void display9() {
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
}
