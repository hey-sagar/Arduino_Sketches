void setup() {
  
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {

  int pot_value = analogRead(A0);

  int mapped_val = map(pot_value, 0, 1023, 0, 255);

  analogWrite(3, mapped_val);
  
  Serial.println(mapped_val);
}
