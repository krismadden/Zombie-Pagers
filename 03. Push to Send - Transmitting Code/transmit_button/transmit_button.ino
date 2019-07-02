
// Include RadioHead Amplitude Shift Keying Library
#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
 
// Create Amplitude Shift- Keying Object
RH_ASK rf_driver;

// constants won't change. It's used here to set the pin number:
const int buttonPin = 2;


int buttonState = 0; 

void setup()
{
    // Initialize ASK Object
    rf_driver.init();

    // initialize the pushbutton pin as an input:
    pinMode(buttonPin, INPUT);
}
 
void loop()
{
    // read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);

    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    if (buttonState == HIGH) {
      const char *msg = "Hello No School";
      rf_driver.send((uint8_t *)msg, strlen(msg));
      rf_driver.waitPacketSent();
      delay(10);
    }
}
