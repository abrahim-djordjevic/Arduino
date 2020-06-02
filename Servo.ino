#include<avr/io.h>
#include<Servo.h>

Servo myservo;
int pos = 0;
int main(void)
{
  myservo.attach(8);
  while(true)
  {
    for(pos = 0; pos <= 180; pos += 1)
    {
      myservo.write(pos);
      delayMicroseconds(15);
    }
    for(pos = 180; pos >= 0; pos -1)
    {
      myservo.write(pos);
      delayMicroseconds(15);
    }
  }
}
