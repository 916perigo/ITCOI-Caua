const int pinoRed = 7;
const int pinoGreen = 6;
const int pinoBlue = 5;

const int pinoPot = A0;

void apagaLed() {
  digitalWrite(pinoRed, LOW);
  digitalWrite(pinoGreen, LOW);
  digitalWrite(pinoBlue, LOW);
}

void acendeVermelho() {
  digitalWrite(pinoRed, HIGH);
  digitalWrite(pinoGreen, LOW);
  digitalWrite(pinoBlue, LOW);
}

void acendeVerde() {
  digitalWrite(pinoRed, LOW);
  digitalWrite(pinoGreen, HIGH);
  digitalWrite(pinoBlue, LOW);
}

void acendeAzul() {
  digitalWrite(pinoRed, LOW);
  digitalWrite(pinoGreen, LOW);
  digitalWrite(pinoBlue, HIGH);
}

void setup() {
  pinMode(pinoRed, OUTPUT);
  pinMode(pinoGreen, OUTPUT);
  pinMode(pinoBlue, OUTPUT);
}

void loop() {
  int valorPot = analogRead(pinoPot);

  if (valorPot <= 256) {
    apagaLed();
  } else if (valorPot <= 512) {
    acendeVermelho();
  } else if (valorPot <= 768) {
    acendeVerde();
  } else {
    acendeAzul();
  }
}
