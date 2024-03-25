#include <IRremote.hpp>
#define IR_RECEIVE_PIN 6

int led = 8; //LED

void setup()
{
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
  
  pinMode(led,OUTPUT);//LED output
}

void loop() {
  if (IrReceiver.decode()) 
  {
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print raw data
    IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
    IrReceiver.printIRSendUsage(&Serial);   // Print the statement required to send this data
    
    //LED control
    switch (IrReceiver.decodedIRData.command) {
      case 0x10: // press 1 to turn ON light 
        digitalWrite(led, HIGH);
        break;
      case 0xc: // press 0 to turn OFF light 
        digitalWrite(led, LOW);
        break;
    }
    IrReceiver.resume(); // Enable receiving of the next value
  }
}
