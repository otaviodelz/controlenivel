//Alavancas
int sensorVerde = 4;
int sensorAmarelo = 3;
int sensorVermelho = 2;

//Led
int ledVerde = 5;
int ledAmarelo = 6;
int ledVermelho = 7;

//Estado
int estadoVerde;
int estadoAmarelo;
int estadoVermelho;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorVerde, INPUT);
  pinMode(sensorAmarelo, INPUT);
  pinMode(sensorVermelho, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void trocaEstado(int led,int estado)
{
  if(estado){
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}

void loop()
{ 
  estadoVerde = digitalRead(sensorVerde);
  trocaEstado(ledVerde, estadoVerde);

  estadoAmarelo = digitalRead(sensorAmarelo);
  trocaEstado(ledAmarelo, estadoAmarelo);

  estadoVermelho = digitalRead(sensorVermelho);
  trocaEstado(ledVermelho, estadoVermelho);

  delay(500);
}
