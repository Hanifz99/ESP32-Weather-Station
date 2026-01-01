# ESP32 Weather Station

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

## Software Setup (PlatformIO)
This project is designed to be compiled using **PlatformIO IDE** (VS Code extension).

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/Hanifz99/ESP32-Weather-Station.git
    ```
2.  **Open with VS Code:** Open the project folder in Visual Studio Code with the PlatformIO extension installed.
3.  **Library Installation:** PlatformIO will automatically install the necessary libraries defined in `platformio.ini`:
    - `adafruit/Adafruit BME280 Library`
    - `adafruit/Adafruit Unified Sensor`
4.  **Build & Upload:** Connect your ESP32 and click the **PlatformIO: Upload** button (arrow icon).


## License
<img src="https://cdn.simpleicons.org/gplv3/BD0000" height="100" align="left" style="margin-right: 10px;">

**GNU GPL v3.0 License**  
This project is open-source. Under the GPL v3 license, you are free to copy, modify, and distribute this software, provided that any derivative works are also licensed under the GPL v3.
<br clear="left"/>
