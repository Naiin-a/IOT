#define potPin 0
#define ledPin 11

int leitura = 0;

void setup(){
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  leitura = analogRead(potPin);

  leitura = map(leitura, 0, 1023, 0, 255);

  analogWrite(ledPin, leitura);

  delay(10);
}
