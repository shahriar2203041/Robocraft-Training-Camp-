int marks = 35; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (marks >= 40) {
    Serial.println("Pass");
  } else {
    Serial.println("Fail");
  }
  delay(1000);
}
