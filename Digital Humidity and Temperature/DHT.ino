#include "DHT.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
#define DHTPIN 10
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  dht.begin();
  lcd.init();
  lcd.backlight();
  
  Serial.begin(9600); // Start serial communication
  Serial.println("DHT11 Sensor Test Initialized");

  lcd.setCursor(0, 0);
  lcd.print("TESTING HUMIDITY");
  lcd.setCursor(0, 1);
  lcd.print("AND  TEMPERATURE");
  delay(2000);
  lcd.clear();
}

void loop() {
  delay(2000);  // Wait between readings

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Check if reading failed
  if (isnan(h) || isnan(t)) {
    lcd.setCursor(0, 0);
    lcd.print("Sensor error!");
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    lcd.clear();
    return;
  }

  // Print to LCD
  lcd.setCursor(1, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  // Print to Serial
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");

  /*delay(2000);
  lcd.clear();
*/
  // Print to LCD
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print(" %");

  // Print to Serial
  Serial.print("Humidity:  ");
  Serial.print(h);
  Serial.println(" %");

  delay(5000);
  lcd.clear();

  lcd.setCursor(3, 0);
  lcd.print("Thank You");
  Serial.println("Displayed readings on LCD.");
  delay(2000);
  lcd.clear();
}
