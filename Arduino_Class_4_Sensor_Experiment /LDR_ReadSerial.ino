int sensorpin = A0;
int sensorValue;
void setup() {

  Serial.begin(9600);
  pinMode(sensorpin, INPUT);
}

void loop() {
  sensorValue = analogRead(sensorpin);
  Serial.println(sensorValue);
  delay(100);
}
