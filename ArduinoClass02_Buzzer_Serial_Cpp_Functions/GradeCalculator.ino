int marks = 78;  // Change this to test other grades

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (marks >= 80) {
    Serial.println("Grade: A+");
  }
  else if (marks >= 70) {
    Serial.println("Grade: A");
  }
  else if (marks >= 60) {
    Serial.println("Grade: A-");
  }
  else if (marks >= 50) {
    Serial.println("Grade: B");
  }
  else if (marks >= 40) {
    Serial.println("Grade: C");
  }
  else {
    Serial.println("Grade: F");
  }

  delay(2000); // Wait 2 seconds before repeating
}
