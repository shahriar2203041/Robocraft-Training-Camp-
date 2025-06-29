int num1 = 25;
int num2 = 35;

void setup() {
  Serial.begin(9600);

  int result = addNumbers(num1, num2);  // Call user-defined function
  Serial.print("Sum of ");
  Serial.print(num1);
  Serial.print(" and ");
  Serial.print(num2);
  Serial.print(" is: ");
  Serial.println(result);
}

void loop() {
  // No repeat needed
}

// User-defined function to add two numbers
int addNumbers(int a, int b) {
  return a + b;
}
