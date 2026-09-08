const int led = 13;
const int liga = 8;
const int desliga = 7;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(liga, INPUT_PULLUP);
  pinMode(desliga, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(liga) == LOW) {
    digitalWrite(led, HIGH);
  }
  
  if (digitalRead(desliga) == LOW) {
    digitalWrite(led, LOW);
  }
}
