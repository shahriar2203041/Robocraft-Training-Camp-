int val1 = 500;
int val2 = 300;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Value of Number 1 is: ");
  Serial.println(val1);
  
  Serial.print("Value of Number 2 is: ");
  Serial.println(val2);
  
  delay(1000); // Wait 1 second
}
