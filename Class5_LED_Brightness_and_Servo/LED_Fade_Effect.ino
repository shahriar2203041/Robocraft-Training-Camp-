int ledpin = 6;

void setup() {
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // Fade from 0 to 255
  for (int fade = 0; fade <= 255; fade += 5) {
    analogWrite(ledpin, fade);
    delay(30);
  }

  // Fade from 255 to 0
  for (int fade = 255; fade >= 0; fade -= 5) {
    analogWrite(ledpin, fade);
    delay(30);
  }
}
