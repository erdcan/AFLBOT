void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
void dur() {
  analogWrite(10, 0);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
void geri() {
  analogWrite(10, 128);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
}

void ileri() {
  analogWrite(10, 255);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void loop() {
  ileri();
  delay(5000);
  geri();
  delay(5000);
  dur();
  delay(3000);
}
