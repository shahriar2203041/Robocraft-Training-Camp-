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
  digitalWrite(9, HIGH);   // a ON
  digitalWrite(10, HIGH);  // b ON
  digitalWrite(11, HIGH);  // c ON
  digitalWrite(5, HIGH);    // d OFF
  digitalWrite(3,LOW);   // e ON
  digitalWrite(6, HIGH);   // f ON
  digitalWrite(4, HIGH);   // g ON
}
