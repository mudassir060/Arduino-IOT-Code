const int Tringpin = 9;
const int EchoPin = 10;
int D = 0;
int Disatance = 0;


void setup() {
  pinMode(Tringpin,OUTPUT);
  pinMode(EchoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(Tringpin,LOW);
  delayMicroseconds(10);
  digitalWrite(Tringpin,HIGH);
  delayMicroseconds(10);
  D = pulseIn(EchoPin,HIGH);
  Disatance = ( D * 0.034 ) / 2;
  Serial.print(Disatance);
  Serial.print("\n");

}