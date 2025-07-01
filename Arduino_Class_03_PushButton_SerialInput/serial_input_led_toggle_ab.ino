char x;
int led_pin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    x = Serial.read(); 
    Serial.print("Received: ");
    Serial.println(x);

    if (x == 'a') {
      digitalWrite(led_pin, HIGH);
      Serial.println("LED ON");
    }
    else if (x == 'b') {
      digitalWrite(led_pin, LOW);
      Serial.println("LED OFF");
    }
  }
}
