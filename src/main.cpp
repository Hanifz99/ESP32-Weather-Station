#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

// BME280 Initialization
Adafruit_BME280 bme; 

// Anemometer Variables
volatile int pulseCount = 0;
float windSpeed = 0.0;
unsigned long lastUpdateTime = 0;

// Interrupt Service Routine (ISR): Called every time the magnet passes the Hall sensor
void IRAM_ATTR countPulse() {
  pulseCount++;
}

void setup() {
  Serial.begin(115200);
  Serial.println("--- Testing ESP32 Weather Station ---");

  // 1. Initialize BME280
  // Common I2C addresses are 0x76 or 0x77
  if (!bme.begin(0x76)) {
    Serial.println("BME280 sensor not found, check your wiring!");
    while (1);
  }

  // 2. Initialize Hall Effect Sensor (Anemometer)
  // Connect the Hall sensor output to GPIO 14
  pinMode(14, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(14), countPulse, FALLING);

  Serial.println("System Ready. Spin your Anemometer...");
}

void loop() {
  // Update data every 2 seconds (2000 milliseconds)
  if (millis() - lastUpdateTime > 2000) {
    
    // Calculate Wind Speed
    // Formula: (Pulses / time interval) * calibration factor
    // The factor 2.4 should be adjusted based on your wind cup size
    windSpeed = (pulseCount / 2.0) * 2.4; 
    
    // Read Data from BME280
    float temperature = bme.readTemperature();
    float humidity = bme.readHumidity();
    float pressure = bme.readPressure() / 100.0F; // Convert to hPa

    // Display Data on Serial Monitor
    Serial.println("===============================");
    Serial.print("Temperature : "); Serial.print(temperature); Serial.println(" °C");
    Serial.print("Humidity    : "); Serial.print(humidity);    Serial.println(" %");
    Serial.print("Pressure    : "); Serial.print(pressure);    Serial.println(" hPa");
    Serial.print("Wind Speed  : "); Serial.print(windSpeed);   Serial.println(" km/h");
    
    // Reset pulse count for the next interval
    pulseCount = 0;
    lastUpdateTime = millis();
  }
}
