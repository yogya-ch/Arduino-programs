
#define m11 12 //INPUT1
#define m12 11 //INPUT2
#define m21 10 //INPUT3
#define m22 9 //INPUT4

void forward()
{
  digitalWrite(m11, HIGH);
  digitalWrite(m12, LOW);
  digitalWrite(m21, LOW);
  digitalWrite(m22, HIGH);
}
void left()
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
  digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
}
void backward()
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, HIGH);
  digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
}
void right()
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, HIGH);
  digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
}
void Stop()
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
  digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
}
void setup()
{
  Serial.begin(9600);
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);
 
  
}
void loop()
{
  while(Serial.available())
  {
    char data = Serial.read();
    if(data=='1') 
    {
      forward();

    }
    else if(data =='2')
    {
      //Serial.println(“Left”);
      right();

    }
    else if(data =='3') //right
    {
      //Serial.println(“right”);
      left();

    }

    else if(data =='4') //backward
    {
      //Serial.println(“backward”);
      backward();

    }
    else if(data =='5') //stop
    {
      Stop();

    }
   
  }
}
