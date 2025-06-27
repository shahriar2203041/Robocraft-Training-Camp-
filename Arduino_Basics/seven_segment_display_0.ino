void setup() {
  pinMode(9, OUTPUT);  // Segment a
  pinMode(10, OUTPUT); // Segment b
  pinMode(11, OUTPUT); // Segment c
  pinMode(5, OUTPUT);  // Segment d
  pinMode(6, OUTPUT);  // Segment e
  pinMode(3, OUTPUT);  // Segment f
}

void loop() {
  digitalWrite(9, HIGH);  // a ON
  digitalWrite(10, HIGH); // b ON
  digitalWrite(11, HIGH); // c ON
  digitalWrite(5, HIGH);  // d ON
  digitalWrite(6, HIGH);  // e ON
  digitalWrite(3, HIGH);  // f ON
  
}
