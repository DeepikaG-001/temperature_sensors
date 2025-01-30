const int oneWireBus 4; 
#define GPIO_LED_PIN (5) 
#define LED PIN2 (14) 
// Setup a oneWire instance to communicate with any OneWire devices OneWire oneWire (oneWireBus); 
// Pass our oneWire reference to Dallas Temperature sensor DallasTemperature sensors (&oneWire); 
void setup() { 
// Start the Serial Monitor 
Serial.begin(115200); 
pinMode (GPIO_LED_PIN,OUTPUT); 
pinMode (LED PIN2, OUTPUT); 
// Start the DS18B20 sensor 
sensors.begin(); 
} 

void loop() { 
digitalWrite(GPIO_LED_PIN, 1); 
sensors.requestTemperatures(); 
float temperature sensors.getTempCByIndex(0); 
float temperatureF = sensors.getTempFByIndex (0); 
Serial.print (temperatureC); 
Serial.println("°C"); 
Serial.print (temperatureF); 
Serial.println("°F"); 
digitalWrite(GPIO_LED_PIN, 0); 
  
if (temperatureC > 35.0) { 
// Turn on the LED 
digitalWrite(LED_PIN2, HIGH); 
} else { 
// Turn off the LED 
digitalWrite(LED_PIN2, LOW); 
}
// Wait for a moment before taking the next reading 
delay(1000); 
}
