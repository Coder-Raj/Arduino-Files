int ledPin = 10;
int x;
void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() 
 { for (x=1; x<=3; x++){
  digitalWrite(ledPin,HIGH);
  delay(150);
  digitalWrite(ledPin,LOW);
  delay(250);
}
delay(500);
  for (x=1; x<=3; x++){
  digitalWrite(ledPin,HIGH);
  delay(400);
  digitalWrite(ledPin,LOW);
  delay(250);
  }
  delay(500);
  for (x=1; x<=3; x++){
  digitalWrite(ledPin,HIGH);
  delay(150);
  digitalWrite(ledPin,LOW);
  delay(250);
  }
  delay(5000);}
