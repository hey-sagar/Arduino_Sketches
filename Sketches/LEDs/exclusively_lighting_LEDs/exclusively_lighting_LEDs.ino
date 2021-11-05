void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7)==HIGH)
  {
    digitalWrite(8, LOW);
  }
  else
  {
    digitalWrite(8, HIGH);
  }
}
