#define step1 8
#define step2 9
#define step3 10
#define step4 11
int stepNo = 0;
void step(bool dir){
  if (dir){
    switch(stepNo){
      case 0:
      digitalWrite(step1, HIGH);
      digitalWrite(step2, LOW);
      digitalWrite(step3, LOW);
      digitalWrite(step4, LOW);
      break;
      case 1:
      digitalWrite(step1, LOW);
      digitalWrite(step2, HIGH);
      digitalWrite(step3, LOW);
      digitalWrite(step4, LOW);
      break;
      case 2:
      digitalWrite(step1, LOW);
      digitalWrite(step2, LOW);
      digitalWrite(step3, HIGH);
      digitalWrite(step4, LOW);
      break;
      case 3:
      digitalWrite(step1, LOW);
      digitalWrite(step2, LOW);
      digitalWrite(step3, LOW);
      digitalWrite(step4, HIGH);
      break;
    }
  }
  else{
    switch(stepNo){
      case 0:
      digitalWrite(step1, LOW);
      digitalWrite(step2, LOW);
      digitalWrite(step3, LOW);
      digitalWrite(step4, HIGH);
      break;
      case 1:
      digitalWrite(step1, LOW);
      digitalWrite(step2, LOW);
      digitalWrite(step3, HIGH);
      digitalWrite(step4, LOW);
      break;
      case 2:
      digitalWrite(step1, LOW);
      digitalWrite(step2, HIGH);
      digitalWrite(step3, LOW);
      digitalWrite(step4, LOW);
      break;
      case 3:
      digitalWrite(step1, HIGH);
      digitalWrite(step2, LOW);
      digitalWrite(step3, LOW);
      digitalWrite(step4, LOW);
      break;
    }
    stepNo++;
    if (stepNo>3){
      stepNo = 0;
    }
  }
  
}
void setup() {
  // put your setup code here, to run once:
  pinMode(step1, OUTPUT);
  pinMode(step2, OUTPUT);
  pinMode(step3, OUTPUT);
  pinMode(step4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  step(false);
  delay(2);
}
