int ledPin = 9;                                                  

void setup(){ 
  // no need to declare the analog output in the setup 
} 

void loop(){ 
  for(int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {      
    analogWrite(ledPin, fadeValue);                               
    delay(2);                                                                            
  } 
  for(int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {      
    analogWrite(ledPin, fadeValue);                               
    delay(2);                                                                             
  } 
}

