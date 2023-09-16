#include <SoftwareSerial.h>
SoftwareSerial mySerial(0,1);
int i,sensorValue=0;
void setup() {
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  mySerial.begin(9600);
  delay(100);
}

void loop() {
  for(i=1;i<=48;i++){
    sensorValue = analogRead(A0);
    if(sensorValue<100){
      if(sensorValue>50){
      digitalWrite(2, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(20000);
      }
        if(sensorValue<50){
        mySerial.println("AT+CMGF=1"); 
        delay(1000);  // Delay of 1 second
        mySerial.println("AT+CMGS=\"+919061475317\"\r"); 
        delay(1000);
        mySerial.println("project done");
        delay(100);
        mySerial.println((char)12);
        delay(1000);
        }
      }
    if(i<=10&&i>=1){
      digitalWrite(2, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000);
      }
    if(i<=12&&i>10){
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(13, LOW);
      delay(1000);
      }
    if(i<=22&&i>12){
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000);
      }
     if(i<=24&&i>22){
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(13, LOW);
      delay(1000);
     }
    if(i<=34&&i>24){
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000);
     }
     if(i<=36&&i>34){
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(13, LOW);
      delay(1000);
     }
    if(i<=46&&i>=36){
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1000);
      }
    if(i<=48&&i>46){
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(13, LOW);
      delay(1000);
     }
        
    }
      digitalWrite(2, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(10000);
  }
