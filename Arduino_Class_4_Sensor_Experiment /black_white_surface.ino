int irSensor = A0;  // IR sensor connected to A0
int value;

void setup() {
  Serial.begin(9600); // Start Serial Monitor
}

void loop() {
  value = analogRead(irSensor); // Read sensor value
  Serial.print("IR Value: ");
  Serial.println(value);

  if (value < 800) {
    Serial.println("Black Surface Detected");
  } else {
    Serial.println("White Surface Detected");
  }

  delay(500); // For stability
}
