#include <Arduino.h>


int passiveBuzz = 9;
void setup() 
{
  pinMode(passiveBuzz,OUTPUT);
}

void loop()
{
  analogWrite(passiveBuzz,70);
  delay(10);
  analogWrite(passiveBuzz,70);
  delay(10);

}

