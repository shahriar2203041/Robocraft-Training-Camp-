int x;
int buttonPin = 9;
int led=7;
void setup() {
  Serial.begin(9600);
  pinMode( buttonPin,INPUT_PULLUP);
   pinMode(led,OUTPUT);
}

void loop() {
x=digitalRead( buttonPin);

if(x==0)
{
  digitalWrite(led,HIGH);
}
else if(x==1)
{
 digitalWrite(led,LOW);
}
delay(1000);
}
