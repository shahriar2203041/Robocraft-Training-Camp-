void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = 100 + 700;
  int b = 3000 - 2100;
  int c = 300 * 6;
  int d = 110 / 10;
  int e = 100 + 120 - 200;
  int f = 100 - 200 + 300 * 2;
  int g = 300*2 + 200*3 + 400/2;
  int h = (20 + 100) % 7;
  int i = (200*40) / (100*20);
  int j = ((300*5) % (200/4)) + (30 - 20) * (30 + 20);

  Serial.print("a. 100 + 700 = ");
  Serial.println(a);

  Serial.print("b. 3000 - 2100 = ");
  Serial.println(b);

  Serial.print("c. 300 * 6 = ");
  Serial.println(c);

  Serial.print("d. 110 / 10 = ");
  Serial.println(d);

  Serial.print("e. 100 + 120 - 200 = ");
  Serial.println(e);

  Serial.print("f. 100 - 200 + 300 * 2 = ");
  Serial.println(f);

  Serial.print("g. 300*2 + 200*3 + 400/2 = ");
  Serial.println(g);

  Serial.print("h. (20 + 100) % 7 = ");
  Serial.println(h);

  Serial.print("i. (200*40) / (100*20) = ");
  Serial.println(i);

  Serial.print("j. ((300*5) % (200/4)) + (30 - 20)*(30 + 20) = ");
  Serial.println(j);

  Serial.println("-------------------");
  delay(3000); // Wait 3 seconds before repeating
}
