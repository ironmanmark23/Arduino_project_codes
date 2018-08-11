int ledPin1 = 9;
int ledPin2 = 10;
void setup() {
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
}
void loop() {
for( int fadeValue = 0;fadeValue <= 250;fadeValue +=5) {
analogWrite(ledPin1, fadeValue);
int fadeValue1=0;
fadeValue1=250-fadeValue;
analogWrite(ledPin2, fadeValue1);
delay(30);
}
for(int fadeValue = 250 ; fadeValue>= 0; fadeValue -=5) {
analogWrite(ledPin1, fadeValue);
int fadeValue1=0;
fadeValue1=250-fadeValue;
analogWrite(ledPin2, fadeValue1);
delay(30);
}
}

