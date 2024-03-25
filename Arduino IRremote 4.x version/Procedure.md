# Arduino IRremote 4.x version

IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver

Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print raw data

IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line

IrReceiver.printIRSendUsage(&Serial);   // Print the statement required to send this data

# key commands

