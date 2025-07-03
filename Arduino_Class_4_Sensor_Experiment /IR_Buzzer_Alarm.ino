int sensorPin = A0;
int buzzer = A1;      // Buzzer connected to A1
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(buzzer, OUTPUT);  // Set buzzer pin as OUTPUT
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue > 1000) {
    digitalWrite(buzzer, LOW);  // OFF
  } else {
    digitalWrite(buzzer, HIGH); // ON
  }

  delay(100);
}
