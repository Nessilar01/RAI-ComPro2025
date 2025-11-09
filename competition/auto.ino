#include <Servo.h> 

Servo servo1; 

Servo servo2; 

 

int IN1 = 4;  

int IN2 = 5; 

int ENA = 3;  

 

int IN3 = 7; 

int IN4 = 8; 

int ENB = 6; 

int n =1; 

int trigPin = 10; 

int echoPin = 11; 

 

 

 

void drive(int leftPwm, int rightPwm) { 

 

 

if (leftPwm >= 0) { 

digitalWrite(IN1, HIGH); 

digitalWrite(IN2, LOW); 

} else { 

digitalWrite(IN1, LOW); 

digitalWrite(IN2, HIGH); 

} 

analogWrite(ENA, abs(leftPwm)); 

 

if (rightPwm >= 0) { 

digitalWrite(IN3, HIGH); 

digitalWrite(IN4, LOW); 

} else { 

digitalWrite(IN3, LOW); 

digitalWrite(IN4, HIGH); 

} 

analogWrite(ENB, abs(rightPwm)); 

} 

 

 

void forward(int sp1, int sp2) { 

drive(sp1, sp2); 

} 

 

void backward(int sp) { 

drive(-sp, -sp); 

} 

 

void turnLeft(int spLeft, int spRight) { 

drive(spLeft, spRight); 

} 

 

void turnRight(int spLeft, int spRight) { 

drive(spLeft, spRight); 

} 

 

void rotateLeft(int sp) { 

drive(-sp, sp); 

} 

 

void rotateRight(int sp) { 

drive(sp, -sp); 

} 

 

void stopMotor() { 

drive(0, 0); 

} 

 

 

long getDistance() { 

digitalWrite(trigPin, LOW); 

delayMicroseconds(2); 

 

digitalWrite(trigPin, HIGH); 

delayMicroseconds(10); 

digitalWrite(trigPin, LOW); 

 

long duration = pulseIn(echoPin, HIGH); 

long distance = duration * 0.034 / 2; // เซนติเมตร 

return distance; 

} 

 

 

void walkUntilWall(int speed1,int speed2, int stopRange) { 

 

forward(speed1,speed2);  

 

while (true) { 

long d = getDistance(); 

Serial.println(d); 

 

if (d <= stopRange) { 

stopMotor(); 

Serial.println("STOP! Wall detected."); 

break; 

} 

} 

} 

 

void setup() { 

pinMode(IN1, OUTPUT); 

pinMode(IN2, OUTPUT); 

pinMode(ENA, OUTPUT); 

 

pinMode(IN3, OUTPUT); 

pinMode(IN4, OUTPUT); 

pinMode(ENB, OUTPUT); 

 

pinMode(trigPin, OUTPUT); 

pinMode(echoPin, INPUT); 

 

Serial.begin(9600); 

servo1.attach(13);  

servo2.attach(12); 

 

servo1.write(180); 

servo2.write(0); 

} 

 

void loop() { 

 

while(n==1){ 

walkUntilWall(100,120, 2);  

stopMotor(); 

delay(500); 

forward(90,100); 

delay(250); 

stopMotor(); 

delay(500); 

 

rotateRight(150);  

delay(650); 

stopMotor(); 

delay(500); 

 

backward(150); 

delay(1000); 

stopMotor(); 

delay(500); 

 

forward(80,130); 

delay(2750); 

stopMotor(); 

delay(500); 

 

rotateRight(150);  

delay(450); 

stopMotor(); 

delay(500); 

 

backward(150); 

delay(1000); 

stopMotor(); 

delay(500); 

 

 

walkUntilWall(100,110, 3);  

stopMotor(); 

delay(500); 

 

forward(80,130); 

delay(700); 

stopMotor(); 

delay(500); 

 

 

backward(150); 

delay(4000); 

stopMotor(); 

delay(500); 

stopMotor(); 

n +=1; 

} 

 

} 