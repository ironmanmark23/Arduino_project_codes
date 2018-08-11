int pirSensor = 7;
int led = 8;

void setup() {
pinMode(pirSensor,INPUT);
pinMode(led,OUTPUT);

// put your setup code here, to run once:

}

void loop() {
int sensorValue = digitalRead(pirSensor);
if (sensorValue == 1)
{
  digitalWrite(led,HIGH);
}// put your main code here, to run repeatedly:

}

