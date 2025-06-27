void setup() {
  pinMode(9, OUTPUT);  // Segment a
  pinMode(10, OUTPUT); // Segment b
  pinMode(11, OUTPUT); // Segment c
}

void loop() {
  digitalWrite(9, HIGH);  // a ON
  digitalWrite(10, HIGH); // b ON
  digitalWrite(11, HIGH); // c ON
}
