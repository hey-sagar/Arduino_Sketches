void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == HIGH){
    digitalWrite(7, HIGH);
    Serial.println("The State of the button is HIGH!");
  }
  else
  {
    digitalWrite(7, LOW);
    Serial.println("The State of the button is LOW!");
  }
  
}
