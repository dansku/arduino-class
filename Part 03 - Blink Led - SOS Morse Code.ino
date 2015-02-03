/*

Program 003
Creating a SOS Morse code

*/

int ledPin = 13;
int dFast = 300;
int dSlow = 800;

void setup(){

	// Set pin 13 as output
	pinMode(ledPin,OUTPUT);
  
}

void loop(){

	// 3 times fast
	digitalWrite(ledPin,HIGH);
	delay(dFast);
	digitalWrite(ledPin,LOW);
	delay(dFast);

  	digitalWrite(ledPin,HIGH);
	delay(dFast);
	digitalWrite(ledPin,LOW);
	delay(dFast);

  	digitalWrite(ledPin,HIGH);
	delay(dFast);
	digitalWrite(ledPin,LOW);
	delay(dFast);

	//------------------------------

	delay(1000);

  	// 3 times slow
	digitalWrite(ledPin,HIGH);
	delay(dSlow);
	digitalWrite(ledPin,LOW);
	delay(dSlow);

  	digitalWrite(ledPin,HIGH);
	delay(dSlow);
	digitalWrite(ledPin,LOW);
	delay(dSlow);

  	digitalWrite(ledPin,HIGH);
	delay(dSlow);
	digitalWrite(ledPin,LOW);
	delay(dSlow);

	//------------------------------

  	// 3 times fast
	digitalWrite(ledPin,HIGH);
	delay(dFast);
	digitalWrite(ledPin,LOW);
	delay(dFast);

  	digitalWrite(ledPin,HIGH);
	delay(dFast);
	digitalWrite(ledPin,LOW);
	delay(dFast);

  	digitalWrite(ledPin,HIGH);
	delay(dFast);
	digitalWrite(ledPin,LOW);
	delay(dFast);

	delay(2000);

}
