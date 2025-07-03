int sensorPin = A0;     // IR sensor output connected to analog pin A0
int sensorValue = 0;    // Variable to store sensor reading

void setup() {
  Serial.begin(9600);       // Start serial communication
  pinMode(sensorPin, INPUT); // A0 is by default INPUT, but fine to declare
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Read analog value (0–1023)
  Serial.println(sensorValue);          // Print the value to Serial Monitor
  delay(100);                           // Small delay for readability
}
