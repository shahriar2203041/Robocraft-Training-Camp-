void setup() {
  pinMode(9, OUTPUT);   // Segment a
  pinMode(10, OUTPUT);  // Segment b
  pinMode(11, OUTPUT);  // Segment c
  pinMode(5, OUTPUT);   // Segment d
  pinMode(3, OUTPUT);   // Segment e
  pinMode(6, OUTPUT);   // Segment f
  pinMode(4, OUTPUT);   // Segment g
}

void loop() {
  digitalWrite(9, HIGH);   // a ON
  digitalWrite(10, HIGH);  // b ON
  digitalWrite(11, LOW);   // c OFF
  digitalWrite(5, HIGH);   // d ON
  digitalWrite(3, HIGH);   // e ON
  digitalWrite(6, LOW);    // f OFF
  digitalWrite(4, HIGH);   // g ON
}
