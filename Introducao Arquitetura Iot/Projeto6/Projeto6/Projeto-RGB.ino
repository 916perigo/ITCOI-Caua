const int pinoBotao = 2;
const int pinoRed = 7;
const int pinoGreen = 6;
const int pinoBlue = 5;

int estadoCor = 0;
int ultimoEstadoBotao = HIGH;

void setup() {
  pinMode(pinoBotao, INPUT_PULLUP);
  pinMode(pinoRed, OUTPUT);
  pinMode(pinoGreen, OUTPUT);
  pinMode(pinoBlue, OUTPUT);
}

void loop() {
  int leitura = digitalRead(pinoBotao);

  if (ultimoEstadoBotao == HIGH && leitura == LOW) {
    estadoCor++;
    if (estadoCor > 3) {
      estadoCor = 0;
    }

    if (estadoCor == 1) {
      digitalWrite(pinoRed, HIGH);
      digitalWrite(pinoGreen, LOW);
      digitalWrite(pinoBlue, LOW);
    } else if (estadoCor == 2) {
      digitalWrite(pinoRed, LOW);
      digitalWrite(pinoGreen, HIGH);
      digitalWrite(pinoBlue, LOW);
    } else if (estadoCor == 3) {
      digitalWrite(pinoRed, LOW);
      digitalWrite(pinoGreen, LOW);
      digitalWrite(pinoBlue, HIGH);
    } else {
      digitalWrite(pinoRed, LOW);
      digitalWrite(pinoGreen, LOW);
      digitalWrite(pinoBlue, LOW);
    }
  }

  ultimoEstadoBotao = leitura;
}
