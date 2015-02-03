/*

Serial Communication Class
Part 04

*/

int x = 0;

void setup(){

	Serial.begin(9600);
  
}

void loop(){

	Serial.println("Hello world!");
	
	x = x + 1;
	
	Serial.println(x);
	delay(1000);
}
