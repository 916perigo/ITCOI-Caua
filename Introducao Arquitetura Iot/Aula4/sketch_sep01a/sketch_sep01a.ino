void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(5000);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(5, LOW);
  
  for (int i = 0; i < 5; i++) {
    digitalWrite(6, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    delay(300);
  }
  digitalWrite(11, LOW);
}
