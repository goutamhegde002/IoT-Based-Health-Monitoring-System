#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_TCS34725.h>
#include <Adafruit_BMP280.h>
#include <SoftwareSerial.h>

// Define sensor pins and settings
#define HEART_RATE_SENSOR_PIN A0
#define TEMPERATURE_SENSOR_PIN A1
#define ACTIVITY_SENSOR_PIN A2

// Initialize sensors
Adafruit_BMP280 bmp;
SoftwareSerial bluetooth(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
  
  if (!bmp.begin()) {
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  int heartRate = analogRead(HEART_RATE_SENSOR_PIN);
  int temperature = analogRead(TEMPERATURE_SENSOR_PIN);
  int activityLevel = analogRead(ACTIVITY_SENSOR_PIN);
  
  // Read temperature from BMP280
  float temperatureBMP = bmp.readTemperature();
  
  // Format data to send over Bluetooth
  String data = "Heart Rate: " + String(heartRate) + 
                ", Temperature: " + String(temperatureBMP) + 
                ", Activity Level: " + String(activityLevel);

  bluetooth.println(data);
  
  // Delay between readings
  delay(5000);
}
