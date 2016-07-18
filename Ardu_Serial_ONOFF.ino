/* Go to Menu vMicro | Debugger | Local Port COMx give it. Verify. Build. Upload. 
* Or use directly Arduino's official "C:\Program Files (x86)\Arduino\arduino.exe"
* Success message:
* Uploading 'Ardu_Serial_ONOFF' to 'Arduino/Genuino Uno' using 'COM6'
*	The upload process has finished.
* Now Go to C# Application with buttons ON/OFF
*/

int led = 13; // to resistor
int intIncomingData = 0;

void setup()
{
	pinMode(led, OUTPUT);
	Serial.begin(9600);

}

void loop()
{
	if (Serial.available())
	{
		intIncomingData = Serial.read();
		if( intIncomingData=='1')
		{ 
			digitalWrite(led, HIGH);

		} 
		else if (intIncomingData == '0')
		{
			digitalWrite(led, LOW);
		}
	}
}
