#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define DHT sensor pin and type
#define DHTPIN 4
#define DHTTYPE DHT11

DHT_Unified dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();

  lcd.init();           // Initialize the LCD
  lcd.backlight();      // Turn on backlight
  lcd.setCursor(2, 0);
  lcd.print("Welcome..!");
  delay(2000);
  lcd.clear();
}

void loop() {
  delay(2000);
  lcd.clear();

  sensors_event_t tempEvent, humidEvent;
  dht.temperature().getEvent(&tempEvent);
  dht.humidity().getEvent(&humidEvent);

  if (isnan(tempEvent.temperature) || isnan(humidEvent.relative_humidity)) {
    Serial.println("Sensor error!");
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error!");
    delay(2000);
    return;
  }

  float temp = tempEvent.temperature;
  float humidity = humidEvent.relative_humidity;

  // Display temperature and humidity
  lcd.setCursor(0, 0);
  lcd.print("TEMP: ");
  lcd.print(temp, 1);
  lcd.write(223); // degree symbol
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("HUMI: ");
  lcd.print(humidity, 1);
  lcd.print("%");

  // Serial output
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(3000);
  lcd.clear();

  // Forecast based on humidity
  lcd.setCursor(0, 0);
  if (humidity >= 90) {
    lcd.print("Rain Likely");
    Serial.println("Forecast: Rain likely");
  } else if (humidity >= 68) {
    lcd.print("Rain Possible");
    Serial.println("Forecast: Rain possible");
  } else {
    lcd.print("No Rain");
    Serial.println("Forecast: No rain");
  }

  delay(3000);
  lcd.clear();

  // Comment based on temperature
  lcd.setCursor(0, 0);
  if (temp <= 15) {
    lcd.print("Too Cold! Stay");
    lcd.setCursor(0, 1);
    lcd.print("Warm");
    Serial.println("Comment: Too Cold! Stay Warm");
  } else if (temp <= 20) {
    lcd.print("Chilly! Wear");
    lcd.setCursor(0, 1);
    lcd.print("Jacket");
    Serial.println("Comment: Chilly! Wear Jacket");
  } else if (temp <= 27) {
    lcd.print("Comfortable");
    lcd.setCursor(0, 1);
    lcd.print("Temperature");
    Serial.println("Comment: Comfortable Temperature");
  } else if (temp <= 34) {
    lcd.print("Warm! Stay");
    lcd.setCursor(0, 1);
    lcd.print("Hydrated");
    Serial.println("Comment: Warm! Stay Hydrated");
  } else {
    lcd.print("Too Hot! Stay");
    lcd.setCursor(0, 1);
    lcd.print("Cool");
    Serial.println("Comment: Too Hot! Stay Cool");
  }

  delay(4000);
  lcd.clear();
}
