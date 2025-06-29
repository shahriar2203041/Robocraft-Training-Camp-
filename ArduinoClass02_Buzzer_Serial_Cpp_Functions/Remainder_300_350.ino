int num1 = 300;
int num2 = 350;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int remainder = num2 % num1;
  Serial.print("Remainder: ");
  Serial.println(remainder);
  delay(1000);
}
