
void setup() {

  int led_pin = x;

  int ldr_pin = y;            // place it between A0 to A5
  
  Serial.begin(9600);        //Sets the data rate in bits per second (baud) for serial data transmission.

  pinMode(ldr_pin, INPUT);

  pinMode(led_pin, OUTPUT);


}

void loop() {

  int ldr_value = analogRead(ldr_Pin);   // LDR gives analog output

  if (ldr_value <= 300) {        // if LDR values are less than 300 , the intensity of light is low

  digitalWrite(led_pin, HIGH);

  }

  else {

  digitalWrite(led_pin, LOW);

  }

}
