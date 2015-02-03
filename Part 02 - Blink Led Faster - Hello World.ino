/*

Program 002

*/

int ledPin = 13;
int dtime = 200;

void setup(){

	pinMode(ledPin,OUTPUT);
  
}

void loop(){

	digitalWrite(ledPin,HIGH);
	delay(dtime);
  
	digitalWrite(ledPin,HIGH);
	delay(dtime);
  
}
