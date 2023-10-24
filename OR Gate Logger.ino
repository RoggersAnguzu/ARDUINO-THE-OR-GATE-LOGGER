// C++ code
//
void setup()
{
  pinMode(6,INPUT);
  pinMode(8,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,INPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  // The First Part is used to declare Variables
 //for the respective inputs
  int A = analogRead(3);
  Serial.print("A=");
  Serial.println(A);
  
  int B = analogRead(2);
  Serial.print("B=");
  Serial.println(B);
  //This Declares  the OR gate and delays at the same tme
  analogWrite(4,(A|B));
  analogWrite(4,255);
  delay(500);
  analogWrite(4,0);
  delay(500);
  
  int X = digitalRead(6);
  Serial.print("X=");
  Serial.println(X);
  
  int Y = digitalRead(8);
  Serial.print("Y=");
  Serial.println(Y);
  digitalWrite(5,(X|Y));
  
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  delay(500);
  
}