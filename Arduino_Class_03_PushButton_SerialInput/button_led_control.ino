int led = 8;
int push = 7;
int state;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(push, INPUT_PULLUP);
}

void loop() {
  state = digitalRead(push);

  if (state == 1) {
    digitalWrite(led, LOW);


  } else if (state == 0) {
    digitalWrite(led, HIGH);
  }
}
