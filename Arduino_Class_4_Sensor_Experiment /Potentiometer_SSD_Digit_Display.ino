int potPin = A0;
int potValue = 0;

void setup() {
  Serial.begin(9600);

  // Set SSD pins as OUTPUT
  pinMode(4, OUTPUT);  // g
  pinMode(6, OUTPUT);  // f
  pinMode(9, OUTPUT);  // a
  pinMode(10, OUTPUT); // b
  pinMode(5, OUTPUT);  // d
  pinMode(3, OUTPUT);  // c
  pinMode(11, OUTPUT); // e
}

void loop() {
  potValue = analogRead(potPin);  // Read potentiometer value (0–1023)
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  clearDisplay();  // Turn OFF all segments

  // Map value to 1–9
  if (potValue <= 113) show1();
  else if (potValue <= 226) show2();
  else if (potValue <= 339) show3();
  else if (potValue <= 452) show4();
  else if (potValue <= 565) show5();
  else if (potValue <= 678) show6();
  else if (potValue <= 791) show7();
  else if (potValue <= 904) show8();
  else show9();  // 905 to 1023

  delay(300);
}

// === Display functions ===
void show1() { digitalWrite(10, HIGH); digitalWrite(3, HIGH); }
void show2() { digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(4, HIGH); digitalWrite(11, HIGH); digitalWrite(5, HIGH); }
void show3() { digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(4, HIGH); digitalWrite(3, HIGH); digitalWrite(5, HIGH); }
void show4() { digitalWrite(6, HIGH); digitalWrite(4, HIGH); digitalWrite(10, HIGH); digitalWrite(3, HIGH); }
void show5() { digitalWrite(9, HIGH); digitalWrite(6, HIGH); digitalWrite(4, HIGH); digitalWrite(3, HIGH); digitalWrite(5, HIGH); }
void show6() { digitalWrite(9, HIGH); digitalWrite(6, HIGH); digitalWrite(4, HIGH); digitalWrite(3, HIGH); digitalWrite(5, HIGH); digitalWrite(11, HIGH); }
void show7() { digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(3, HIGH); }
void show8() { digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(3, HIGH); digitalWrite(5, HIGH); digitalWrite(11, HIGH); digitalWrite(6, HIGH); digitalWrite(4, HIGH); }
void show9() { digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(3, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH); digitalWrite(4, HIGH); }

void clearDisplay() {
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
}
