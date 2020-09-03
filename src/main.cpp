#include <Arduino.h>

int analogPin = A0;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  delay(2000);
  //Serial.println(val);
  float volatage = 5.0 * val / 1023;
  Serial.println(volatage);
}