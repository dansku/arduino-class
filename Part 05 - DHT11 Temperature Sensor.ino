/*

DHT11 - Temperature / Humidity Sensor
Part 05

*/

// Define sensor pin
#define DHTPin 4

// Sensor type
#define DHTID DHT11

// Start sensor
DHT dht(DHTPin, DHTID);

void setup(){

	// Start Serial Communication
	Serial.begin(9600);

	dht.begin();
  
}

void loop(){

	// Read humidity 
	float h = dht.readHumidity();

	// Read temperature C
	float tC = dht.readTemperature();

	// Read temperature F
	float tF = dht.readTemperature(true);

	// Display Data

	Serial.print("Humidity: ");
	Serial.print(h);

	Serial.print("% - Temperature: ");
	Serial.print(tC);
	Serial.print("C - ");
	Serial.print(tF);
	Serial.println("F");

	delay(2000);

}
