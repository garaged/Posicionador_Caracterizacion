int DirPin = 2; 
int StepPin = 3;
int EnnablePin=4;
int DirPin2 = 5; 
int StepPin2 = 6;
int EnnablePin2=7;
int var1;

void setup(){
 pinMode(DirPin, OUTPUT);
 pinMode(StepPin, OUTPUT);
 pinMode(EnnablePin, OUTPUT);
 digitalWrite(EnnablePin, HIGH);

 pinMode(DirPin2, OUTPUT);
 pinMode(StepPin2, OUTPUT);
 pinMode(EnnablePin2, OUTPUT);
 digitalWrite(EnnablePin2, HIGH);
 Serial.begin(9600);
}
void loop() {
//  //turn left
// digitalWrite(DirPin, LOW);  
// stepMotor();
//  delay(3000);
//  //turn right
// digitalWrite(DirPin, HIGH);  
//  stepMotor();
//  delay(3000);

int temp = 0;

if (Serial.available())
{
  var1 = Serial.read();
  if (var1 == 'a')
  {
     digitalWrite(DirPin, HIGH);  
      stepMotor();
      delay(temp);
  }

  else if (var1 == 'b')
  {
     digitalWrite(DirPin, LOW);  
      stepMotor();
      delay(temp); 
  }

  else if (var1 == 'c')
  {
     digitalWrite(DirPin2, HIGH);  
      stepMotor2();
      delay(temp); 
  }

  else if (var1 == 'd')
  {
     digitalWrite(DirPin2, LOW);  
      stepMotor2();
      delay(temp); 
  }


  else
  {
    digitalWrite(StepPin, LOW);
  }
}


}

void stepMotor(){
 int i;
 int steps = 1000;
 for (i = 0; i<(steps) ; i++){
   digitalWrite(StepPin, HIGH); 
   digitalWrite(StepPin, LOW);
   delayMicroseconds(250);
 }
}

void stepMotor2(){
 int i;
 int steps = 1000;
 for (i = 0; i<(steps) ; i++){
   digitalWrite(StepPin2, HIGH); 
   digitalWrite(StepPin2, LOW);
   delayMicroseconds(250);
 }
}
