// C++ code
//
int i=0;
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  analogWrite(3,i);
  i+=10;
  if(i>255)
  {
    i=0;
  }
  delay(100);
}