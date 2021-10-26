#include <ESP8266WiFi.h> 

int value1;
int value2;
int value3;

int pin1=0; //GPIO10 = D1
int pin2=4; //GPIO9 = D2
int pin3=5; //GPIO0 = D3

void setup() {
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  digitalWrite(pin1, HIGH);
  delay(100);
  value1 = analogRead(A0);
  digitalWrite(pin1, LOW);
  
  digitalWrite(pin2, HIGH);
  delay(100);
  value2 = analogRead(A0);
  digitalWrite(pin2, LOW);

  digitalWrite(pin3, HIGH);
  delay(100);
  value3 = analogRead(A0);
  digitalWrite(pin3, LOW);

  Serial.print("pin1=");
  Serial.println(value1);
  Serial.print("pin2=");
  Serial.println(value2);
  Serial.print("pin3=");
  Serial.println(value3);

}
