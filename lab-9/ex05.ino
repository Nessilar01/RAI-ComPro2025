// C++ code
//
int i;
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  for (i=1;i<5;i++){
    digitalWrite(i, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
  for (i=5;i>1;i--){
    digitalWrite(i, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
}