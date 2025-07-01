int x;

void setup() {
  Serial.begin(9600);
  pinMode(9,INPUT_PULLUP);

}

void loop() {
x=digitalRead(9);
Serial.println(x);
delay(1000);
}
