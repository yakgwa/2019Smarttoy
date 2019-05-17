#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
  int a = digitalRead(2);
  if (a == 0)
  {
    digitalWrite(13,HIGH);
  else if (a == 1)
  {
    digitalWrite(13,LOW);
  }
}
