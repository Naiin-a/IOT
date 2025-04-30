int trig = 11;
int echo = 12;

int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;

int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  Serial.begin(9600);
}
  void loop(){
    digitalWrite(trig, HIGH);
    delay(500);
    digitalWrite(trig, LOW);

    duration = pulseIn(echo, HIGH);
    distance = (duration * 0.0343)/2;
    Serial.println(distance);

    if (distance <= 5){
      digitalWrite(LED1, HIGH);
    }else{
      digitalWrite(LED1,LOW);
    }

    if (distance <= 7){
      digitalWrite(LED2, HIGH);    
    }else{
      digitalWrite(LED2, LOW);
    }

    if(distance <= 10){
      digitalWrite(LED3, HIGH);
    }else{
      digitalWrite(LED3, LOW);
    }

    if (distance <= 15){
      digitalWrite(LED4, HIGH);
    }else{
      digitalWrite(LED4, LOW);
    }

    if (distance <= 17){
      digitalWrite(LED5, HIGH);
    }else{
      digitalWrite(LED5, LOW);
    }
 }
