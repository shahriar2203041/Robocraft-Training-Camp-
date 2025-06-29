int num1 = 300;
int num2 = 350;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sum = num1 + num2;
  int diff = num1 - num2;
  int product = num1 * num2;
  float quotient = (float)num1 / num2;  // Cast to float for decimal division

  Serial.print("Sum: ");
  Serial.println(sum);

  Serial.print("Subtraction: ");
  Serial.println(diff);

  Serial.print("Multiplication: ");
  Serial.println(product);

  Serial.print("Division: ");
  Serial.println(quotient);

  Serial.println("------------------");
  delay(2000); // Wait 2 seconds before repeating
}
