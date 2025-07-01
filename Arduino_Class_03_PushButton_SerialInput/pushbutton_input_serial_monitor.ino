int x;
int buttonPin = 9;
void setup() {
  Serial.begin(9600);
  pinMode( buttonPin,INPUT_PULLUP);

}

void loop() {
x=digitalRead( buttonPin);
Serial.println(x);
delay(1000);
}
