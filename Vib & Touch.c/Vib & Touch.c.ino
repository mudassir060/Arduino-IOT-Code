
int bzrPin = 9;
int vibPin = 8;
int touchPin = 10;
int LED = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(bzrPin, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(vibPin, INPUT);
  pinMode(touchPin, INPUT);
}

void loop() {
  int vibStatus = digitalRead(vibPin); 
  int touchStatus = digitalRead(touchPin); 
  if (vibStatus == 0)
  {
    digitalWrite(LED, LOW);
    Serial.println("Motion Ended!");
  }
  else
  {
    digitalWrite(LED, HIGH);
    Serial.println("Motion Detected!");
  }
  if (touchStatus == 0)
  {
    digitalWrite(bzrPin, LOW);
    Serial.println("Motion Ended!");
  }
  else
  {
    digitalWrite(bzrPin, HIGH);
    Serial.println("Motion Detected!");
  }
}
