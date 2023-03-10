
int bzrPin = 8;
int vibPin = 9;
int LED = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(bzrPin, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(vibPin, INPUT);
}

void loop() {
  int sensorStatus = digitalRead(vibPin); 
  if (sensorStatus == 0)
  {
    digitalWrite(LED, LOW);
    digitalWrite(bzrPin, LOW);
    Serial.println("Motion Ended!");
  }
  else
  {
    digitalWrite(LED, HIGH);
    digitalWrite(bzrPin, HIGH);
    Serial.println("Motion Detected!");
  }
}
