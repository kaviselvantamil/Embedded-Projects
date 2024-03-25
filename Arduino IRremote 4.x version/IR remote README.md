# Arduino IRremote 4.x version

IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); **_// Start the receiver_**

Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); **_// Print raw data_**

IrReceiver.printIRResultShort(&Serial); **_// Print complete received data in one line_**

IrReceiver.printIRSendUsage(&Serial);  **_// Print the statement required to send this data_**


> [!NOTE]
> # key commands
> use the **IrReceiver.printIRResultShort(&Serial);
> // Print complete received data in one line** to find the command of the specific remote key.
>
> ![Command code](images/commandpart.png)
>
> # ThinkerCAD
> [ThinkerCAD](https://www.tinkercad.com/things/a5GC0AVRf8G-arduino-irremote-4x-version) << **_link for implementation_** 
>
> # Circuit for IR Remote
>![irremoteckt](images/IRremotecircuit.png)
