const int trigPin = 5;
const int echoPin = 6;
long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  distance = measureDistance();  // Call user-defined function
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
}

// ----------- User-defined function -------------
float measureDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  float dist = duration * 0.0343 / 2;  // Speed of sound = 343 m/s → 0.0343 cm/µs
  return dist;
}
