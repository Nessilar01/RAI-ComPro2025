const int redLED = 13;
const int yellowLED = 12;
const int greenLED = 11;
const int buttonPin = 9;

const int greenTime = 6000;  
const int yellowTime = 1000;  
const int redTime = 4000;  

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(greenLED, HIGH);
  unsigned long start = millis();
  
  while (millis() - start < greenTime) {
    if (digitalRead(buttonPin) == HIGH) { 
      Serial.println("press");
      break; 
    }
  }
  digitalWrite(greenLED, LOW);

 
  digitalWrite(yellowLED, HIGH);
  delay(yellowTime);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  delay(redTime);
  digitalWrite(redLED, LOW);

}
  


  
  
