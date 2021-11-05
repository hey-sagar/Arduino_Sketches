int LED = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

  for (int value = 0; value <= 255; value += 5)
  {
    analogWrite(LED, value);
    Serial.println(analogRead(A0)*(5000/1023));
    delay(100);
  }
  for (int value = 255; value >= 0; value -= 5)
  {
    analogWrite(LED, value);
    Serial.println(analogRead(A0)*(5000/1023));
    delay(100);
  }
}
