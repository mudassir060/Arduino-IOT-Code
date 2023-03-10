const int RED = 8;
const int YELLOW = 9;
const int GREEN = 10;

void setup() {
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(GREEN,OUTPUT);
}

void loop() {
  digitalWrite(RED,HIGH);
  Serial.print("\nRed Light is on");
  delay(3000);
  Serial.print("\nRed Light is off");
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,HIGH);
  Serial.print("\nYellow Light is on");
  delay(1000);
  Serial.print("\nYellow Light is off");
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,HIGH);
  Serial.print("\nGREEN Light is on");
  delay(3000);
  Serial.print("\nGREEN Light is off");
  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW,HIGH);
  Serial.print("\nYellow Light is on");
  delay(1000);
  Serial.print("\nYellow Light is off");
  digitalWrite(YELLOW,LOW);
}