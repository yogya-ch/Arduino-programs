#include<SoftwareSerial.h>
SoftwareSerial BLU(0,1); 
char data;

int light1 = 13;
int fan = 9;
int motorx = 10;
int motory =11;

void all_on()
{
  digitalWrite(light1, HIGH);
  digitalWrite(fan, HIGH);
}

void all_off()
{
  digitalWrite(light1, LOW);
  digitalWrite(fan, LOW);
}

void setup()
{
BLU.begin(9600);
Serial.begin(9600);
Serial.println("waiting for command....");
BLU.println("send 1 to turn on led .send 0 to turn off");

pinMode(light1, OUTPUT);
pinMode(fan, OUTPUT);
digitalWrite(motorx,HIGH);
digitalWrite(motory,LOW);
}


void loop(){
  if(BLU.available()){
    data=BLU.read();
    
    if(data=='1'){
      digitalWrite(light1,1);
      Serial.println("Led on!");
      BLU.println("led on!");
    }
    else if(data=='2'){
      digitalWrite(light1,0);
      Serial.println("Led off!");
      BLU.println("led off!");
    }
     else if(data=='4'){
      digitalWrite(fan,1);
      Serial.println("fan on!");
      BLU.println("fan on!");
    }
    else if(data=='3'){
      digitalWrite(fan,0);
      Serial.println("fan off!");
      BLU.println("fan off!");
    }
    else if(data=='9'){
      digitalWrite(fan,1);
      digitalWrite(light1,1);
      Serial.println("all on!");
      BLU.println("all on!");
    }
    else if(data=='8'){
      digitalWrite(fan,0);
      digitalWrite(light1,0);
      Serial.println("all off!");
      BLU.println("all off!");
    }
    
    else{;}
  }
 delay(100); 
}



