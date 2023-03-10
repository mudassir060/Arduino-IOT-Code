const int RED = 11;
const int YELLOW = 12;
const int GREEN = 13;

void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(RED,HIGH);
  delay(5000);
  digitalWrite(RED,LOW);
  delay(5000);
  digitalWrite(YELLOW,HIGH);
  delay(5000);
  digitalWrite(YELLOW,LOW);
  delay(5000);
  digitalWrite(GREEN,HIGH);
  delay(5000);
  digitalWrite(GREEN,LOW);
  delay(5000);
}
