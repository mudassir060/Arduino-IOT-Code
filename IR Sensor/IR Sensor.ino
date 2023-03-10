int irPin = 9;
int LED = 13;
void setup()
{
  Serial.begin(9600); 
  pinMode(irPin, INPUT);
  pinMode(LED, OUTPUT);
}
void loop()
{
  int sensorStatus = digitalRead(irPin); 
  if (sensorStatus == 1)
  {
    digitalWrite(LED, LOW);
    Serial.println("Motion Ended!");
  }
  else
  {
    digitalWrite(LED, HIGH);
    Serial.println("Motion Detected!");
  }
}