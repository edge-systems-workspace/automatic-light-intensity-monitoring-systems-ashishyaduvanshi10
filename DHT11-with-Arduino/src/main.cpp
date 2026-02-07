#include <Arduino.h>
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

void setup() {
    Serial.begin();
    Serial.println("DHT11 SENSOR INITIALISED");
// write your initialization code here
}

void loop() {
    float humidity=dht.readHumidity();
    float temperature=dht.readTemperatuere();
    if (isnan(humidity) || isnan(temperature))
    {
        Serial.println("Failed to read from DHT sensor!");
        delay(2000);
        return;
    }
    Serial.print("Humidity :");
    Serial.print(humidity);
    Serial.print(" % | ");
    Serial.print("Temperature :");
    Serial.print(temperature);
    Serial.print(" *c");
    delay(2000);
// write your code here
}