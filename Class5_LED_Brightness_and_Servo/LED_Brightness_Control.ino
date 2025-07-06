int ledpin=6;
int brightness=10;
void setup() {
 pinMode(ledpin,OUTPUT);

}

void loop() {
analogWrite(ledpin,brightness);
}
