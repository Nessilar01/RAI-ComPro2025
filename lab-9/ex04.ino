// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  int a = analogRead(A0);
  if (a>1000)
  {
    analogWrite(5,255);
  }
  else if (a>750)
  {
    analogWrite(5,200);
  }
  else if (a>500)
  {
    analogWrite(5,150);
  }
  else if (a>250)
  {
    analogWrite(5,100);
  }
  else
  {
    analogWrite(5,0);
  }
  
}