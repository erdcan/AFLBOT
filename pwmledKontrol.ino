void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, 20);
  delay(1000);
  analogWrite(11, 120);
  delay(1000);

  analogWrite(11, 220);
  delay(1000);
}
