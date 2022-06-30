int pump = 4;
int sensor = 2;
int val;

void setup() {
  pinMode(4,OUTPUT);
  pinMode(2,INPUT);
}

void loop() { 
  val = digitalRead(2); 

  if(val == LOW) {
    digitalWrite(4,LOW);
  } else {
    digitalWrite(4,HIGH);
  }
  delay(400);
}