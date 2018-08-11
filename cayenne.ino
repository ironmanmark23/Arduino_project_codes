#include <BlynkApiArduino.h>




#include <CayenneSerial.h>

// Cayenne authentication token. This should be obtained from the Cayenne Dashboard.
char token[] = "9179ib9zgx";

void setup()
{
  //Baud rate can be specified by calling Cayenne.begin(token, 9600);
  Cayenne.begin(token);
}

void loop()
{
  Cayenne.run();
}
