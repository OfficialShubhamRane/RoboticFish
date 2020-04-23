int motorPin1 = 3;
int motorPin2 = 4;
int motorPin3 = 5;
int motorPin4 = 6;
 
void setup() 
{ 
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
} 
 
 
void loop() 
{
  int stop = 0;
  int speed = 180;
  int max = 255;
  {
    analogWrite(motorPin1, speed);
  }
  {
    delay(5000);
    analogWrite(motorPin2, max);
    delay(3000);
    analogWrite(motorPin2, stop);
    analogWrite(motorPin1, max);
    delay(2000);
    analogWrite(motorPin1, speed);
  } 
  {
    delay(2000);
    analogWrite(motorPin3, max);
    delay(3000);
    analogWrite(motorPin3, stop);
    analogWrite(motorPin1, max);
    delay(2000);
    analogWrite(motorPin1, speed);
  }
  {
    delay(4000);
    analogWrite(motorPin4, max);
    delay(10000);
    analogWrite(motorPin4, stop);
  }
} 