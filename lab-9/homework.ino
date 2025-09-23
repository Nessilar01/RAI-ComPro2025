// C++ code
//
float a=0,A=0;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  a=analogRead(A0);
  Serial.print("Val a = ");
  Serial.println(a);
  /*digitalWrite(5,1);
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  delay(500);*/
  if(a>1000)
  {
    digitalWrite(5,1);
    digitalWrite(4,1);
    digitalWrite(3,1);
    digitalWrite(2,1);
  }
  else if(a>750)
  {
    digitalWrite(5,1);
    digitalWrite(4,1);
    digitalWrite(3,1);
    digitalWrite(2,0);
  }
  else if(a>500)
  {
    digitalWrite(5,1);
    digitalWrite(4,1);
    digitalWrite(3,0);
    digitalWrite(2,0);
  }
  else if(a>250)
  {
    digitalWrite(5,1);
    digitalWrite(4,0);
    digitalWrite(3,0);
    digitalWrite(2,0);
  }
  else
  {
    digitalWrite(5,0);
    digitalWrite(4,0);
    digitalWrite(3,0);
    digitalWrite(2,0);
  }
}