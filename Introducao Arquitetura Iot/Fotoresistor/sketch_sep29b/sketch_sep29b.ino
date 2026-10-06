// C++ code
//

int pinoLed = 11;
int pinoSensorLuz = A0;
int limiarLuz = 510; //Minha Amiga Poliana que escolheu o 510👍
int valorLuz = 0;

void setup()
{
  pinMode(pinoLed, OUTPUT);
  pinMode (pinoSensorLuz, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valorLuz = analogRead(pinoSensorLuz);
  Serial.print("Leitura Foto Resistor: \n");
  Serial.print(valorLuz);
  
  if (valorLuz > limiarLuz)
  {  
    digitalWrite(pinoLed, LOW);
    Serial.print("Ambiente Claro - LED Apagado\n");
  }
  
  else
  {
    digitalWrite(pinoLed, HIGH);
    Serial.print("Ambiente Escuro - LED aceso\n");
  }
  
  delay(500);
  
}
