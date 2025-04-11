int ledPin = 10;
int ledPin = 9;
int ledPin = 8;
int buttonStale = 0;
int cont = 0;

void setup(){
 pintMode(ledPin1,OUTPUT);
 pinMode(ledPin2,OUTPUT);
 pinMode(ledPin3,OUTPUT);
 pinMode(buttonPin, INPUT);

}

void loop(){
  buttonState = difgitalRead(buttonpin);
  if(buttonState == HIGH){
  cont++;
  delay(100);
  }
  if(cont == 1){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(100);
  }
  if(cont == 2){
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  delay(100);
  }

  if(cont == 3){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(100);
  }

  if(cont == 4){
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(100);
  }
  
}
