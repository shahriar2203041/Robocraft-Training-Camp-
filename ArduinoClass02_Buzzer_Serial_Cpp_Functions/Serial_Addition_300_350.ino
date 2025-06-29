int num1 = 300;
int num2 = 350;
int sum = num1 + num2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sum of ");
  Serial.print(num1);
  Serial.print(" and ");
  Serial.print(num2);
  Serial.print(" is: ");
  Serial.println(sum);
  
  delay(1000); // Wait 1 second
}
