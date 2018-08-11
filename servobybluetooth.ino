#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial mySerial(10, 11); // RX | TX

Servo servo;  

int servoPin = 9;
int servoAngle = 0;   // servo position in degrees

char command;

void setup() {
   Serial.begin(9600);
   mySerial.begin(9600);
   Serial.println("You're connected via Bluetooth");
   servo.attach(servoPin);
 }


void loop() {
  if (mySerial.available())
   {
    command=(mySerial.read());
    if (command=='1')
    {
      Serial.println("Servo motor to 0 degrees");
      servo.write(0);              
      delay(30);                  
     
    }

    else if (command=='2')
    {
      Serial.println("Servo motor to 360 degrees");
      servo.write(360);              
      delay(30);
    }

  }
 
}
