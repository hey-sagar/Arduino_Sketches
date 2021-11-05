#define B_L 13
#define B 12
#define B_R 11
#define Period 10
#define T_R 9
#define T 8
#define T_L 7
#define C 6

void output0()
{
  digitalWrite(B_L, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, HIGH);
  digitalWrite(C, LOW);
  
}
void output1()
{
  digitalWrite(B_L, LOW);
  digitalWrite(B, LOW);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, LOW);
  digitalWrite(T_L, LOW);
  digitalWrite(C, LOW);
  
}
void output2()
{
  digitalWrite(B_L, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(B_R, LOW);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, LOW);
  digitalWrite(C, HIGH);
  
}
void output3()
{
  digitalWrite(B_L, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, LOW);
  digitalWrite(C, HIGH);
  
}
void output4()
{
  digitalWrite(B_L, LOW);
  digitalWrite(B, LOW);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, LOW);
  digitalWrite(T_L, HIGH);
  digitalWrite(C, HIGH);
  
}
void output5()
{
  digitalWrite(B_L, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, LOW);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, HIGH);
  digitalWrite(C, HIGH);
  
}
void output6()
{
  digitalWrite(B_L, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, LOW);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, HIGH);
  digitalWrite(C, HIGH);
  
}
void output7()
{
  digitalWrite(B_L, LOW);
  digitalWrite(B, LOW);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, LOW);
  digitalWrite(C, LOW);
  
}
void output8()
{
  digitalWrite(B_L, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, HIGH);
  digitalWrite(C, HIGH);
  
}
void output9()
{
  digitalWrite(B_L, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(B_R, HIGH);
  digitalWrite(Period, LOW);
  digitalWrite(T_R, HIGH);
  digitalWrite(T, HIGH);
  digitalWrite(T_L, HIGH);
  digitalWrite(C, HIGH);
  
}
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
output1();
delay(1000);
output2();
delay(1000);
output3();
delay(1000);
output4();
delay(1000);
output5();
delay(1000);
output6();
delay(1000);
output7();
delay(1000);
output8();
delay(1000);
output9();
delay(1000);
output0();
delay(1000);
}
