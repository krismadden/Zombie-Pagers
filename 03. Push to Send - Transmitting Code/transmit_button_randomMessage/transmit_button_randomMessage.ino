
// Include RadioHead Amplitude Shift Keying Library
#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
 
// Create Amplitude Shift- Keying Object
RH_ASK rf_driver;

// constants won't change. It's used here to set the pin number:
const int buttonPin = 2;


int buttonState = 0; 

String messages[] = {
  "Hello No School!",
  "Hello France!",
  "Hello Nevers!",
  "Hello Europe!",
  "Hello World!",
  "Hello Universe!",
  "Hello Town!"
}; 

int messagesLength = 7;

String message;


void setup()
{
    // Initialize ASK Object
    rf_driver.init();

    // initialize the pushbutton pin as an input:
    pinMode(buttonPin, INPUT);
    Serial.begin(9600);

    Serial.println(sizeof(messages)/sizeof(int));
}
 
void loop()
{
    // read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);

    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    if (buttonState == HIGH) {
      char copy[50];
      messages[random(messagesLength)].toCharArray(copy,50);
      const char *msg =  copy;
      Serial.println(copy);
      
      rf_driver.send((uint8_t *)msg, strlen(msg));
      rf_driver.waitPacketSent();
      delay(100);
    }
}
