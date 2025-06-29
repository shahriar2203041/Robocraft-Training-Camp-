char ch1 = 'a';
char ch2 = 'b';

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("First character: ");
  Serial.println(ch1);

  Serial.print("Second character: ");
  Serial.println(ch2);

  delay(1000); // Wait 1 second
}
