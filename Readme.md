# ESP32 DIY Weather Station 🌦️

A professional-grade, open-source IoT Weather Station built with ESP32. This project monitors real-time environmental data including temperature, humidity, atmospheric pressure, and wind speed using a DIY Hall Effect anemometer.

## Features
- **Precise Environment Sensing:** Uses the BME280 sensor for high-accuracy climate data.
- **DIY Anemometer:** Custom-built wind speed sensor using Hall Effect sensors (A3144).
- **IoT Ready:** Designed for seamless integration with cloud platforms.
- **3D Printed Components:** Optimized for white filament to reflect solar heat.

## Hardware Requirements
- **Microcontroller:** ESP32 (DevKit V1 or S3) with External Antenna.
- **Sensors:** 
  - BME280 (Temperature, Humidity, Pressure)
  - Hall Effect Sensor A3144 (for Anemometer)
- **Mechanicals:** 
  - M5 Threaded rods and bolts
  - 3D Printed cups and housing
  - Neodymium Magnets

## Getting Started
1. **Hardware Setup:** Connect the BME280 to I2C pins (GPIO 21/22) and the Hall Sensor to GPIO 14.
2. **Software:** 
   - Install [Arduino IDE](www.arduino.cc).
   - Install libraries: `Adafruit_BME280`, `Adafruit_Sensor`.
3. **Upload:** Open the code in Arduino IDE, select your ESP32 board, and hit Upload.

## License
<img src="https://cdn.simpleicons.org/gplv3/BD0000" height="100" align="left" style="margin-right: 10px;">

**GNU GPL v3.0 License**  
This project is open-source. Under the GPL v3 license, you are free to copy, modify, and distribute this software, provided that any derivative works are also licensed under the GPL v3.
<br clear="left"/>
