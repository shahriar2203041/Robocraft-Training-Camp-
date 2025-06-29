void setup() {
  pinMode(9, OUTPUT);  // a
  pinMode(10, OUTPUT); // b
  pinMode(11, OUTPUT); // c
  pinMode(5, OUTPUT);  // d
  pinMode(6, OUTPUT);  // e
  pinMode(3, OUTPUT);  // f
  pinMode(2, OUTPUT);  // g (added now)

  display0(); delay(1000);
  display1(); delay(1000);
  display2(); delay(1000);
  display3(); delay(1000);
  display4(); delay(1000);
  display5(); delay(1000);
  display6(); delay(1000);
  display7(); delay(1000);
  display8(); delay(1000);
  display9(); delay(1000);
}

void loop() {
  // Nothing here
}

void display0() {
  digitalWrite(9, HIGH);   // a
  digitalWrite(10, HIGH);  // b
  digitalWrite(11, HIGH);  // c
  digitalWrite(5, HIGH);   // d
  digitalWrite(6, HIGH);   // e
  digitalWrite(3, HIGH);   // f
  digitalWrite(2, LOW);    // g OFF
}

void display1() {
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
}

void display2() {
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
}

void display3() {
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
}

void display4() {
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}

void display5() {
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}

void display6() {
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}

void display7() {
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
}

void display8() {
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}

void display9() {
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}
