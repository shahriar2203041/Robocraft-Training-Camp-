char input;

void setup() {
  Serial.begin(9600);

  // Set SSD segment pins as output
  pinMode(4, OUTPUT);   // g
  pinMode(6, OUTPUT);   // f
  pinMode(9, OUTPUT);   // a
  pinMode(10, OUTPUT);  // b
  pinMode(5, OUTPUT);   // d
  pinMode(3, OUTPUT);   // c
  pinMode(12, OUTPUT);  // e
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.read();

    // Only clear and show if input is valid (1–9)
    if (input >= '1' && input <= '9') {
      clearDisplay();
      displayDigit(input);
    }
  }
}

// Display correct digit
void displayDigit(char digit) {
  switch (digit) {
    case '1': show1(); break;
    case '2': show2(); break;
    case '3': show3(); break;
    case '4': show4(); break;
    case '5': show5(); break;
    case '6': show6(); break;
    case '7': show7(); break;
    case '8': show8(); break;
    case '9': show9(); break;
  }
}

// ------ Digit Functions ------

void show1() {
  digitalWrite(10, HIGH); // b
  digitalWrite(12, HIGH);  // c
}

void show2() {
  digitalWrite(9, HIGH);  // a
  digitalWrite(10, HIGH); // b
  digitalWrite(4, HIGH);  // g
  digitalWrite(3, HIGH); // e
  digitalWrite(5, HIGH);  // d
}

void show3() {
  digitalWrite(9, HIGH);  digitalWrite(10, HIGH);
  digitalWrite(4, HIGH);  digitalWrite(12, HIGH); digitalWrite(3, HIGH);
}

void show4() {
  digitalWrite(6, HIGH); digitalWrite(4, HIGH);
  digitalWrite(10, HIGH); digitalWrite(12, HIGH);
}

void show5() {
  digitalWrite(9, HIGH);  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);  digitalWrite(12, HIGH); digitalWrite(3, HIGH);
}

void show6() {
  digitalWrite(9, HIGH);  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);  digitalWrite(12, HIGH);
}

void show7() {
  digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(12, HIGH);
}

void show8() {
  digitalWrite(9, HIGH);  digitalWrite(10, HIGH); digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);  digitalWrite(12, HIGH);
  digitalWrite(6, HIGH);  digitalWrite(4, HIGH);
}

void show9() {
  digitalWrite(9, HIGH);  digitalWrite(10, HIGH); digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);  digitalWrite(6, HIGH);  digitalWrite(4, HIGH);
}

void clearDisplay() {
  digitalWrite(4, LOW);  // g
  digitalWrite(6, LOW);  // f
  digitalWrite(9, LOW);  // a
  digitalWrite(10, LOW); // b
  digitalWrite(5, LOW);  // d
  digitalWrite(3, LOW);  // c
  digitalWrite(12, LOW); // e
}
