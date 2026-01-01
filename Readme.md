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
  - Hall Effect Sensor A3144 (for Anemometer) (EXPERIMENTAL)
- **Mechanicals: (EXPERIMENTAL)** 
  - M5 Threaded rods and bolts
  - 3D Printed cups and housing
  - Neodymium Magnets

*(EXPERIMENTAL) means are currently in the testing phase and have not been fully validated in the field

## Software Setup

### PlatformIO (Recommended)
This project is optimized for **PlatformIO**. It manages libraries and board configurations automatically.

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/Hanifz99/ESP32-Weather-Station.git
    ```
2.  **Open Project:** Launch VS Code and open the cloned folder.
3.  **Automatic Dependency Management:** PlatformIO will automatically fetch the required libraries:
    - `adafruit/Adafruit BME280 Library`
    - `adafruit/Adafruit Unified Sensor`
4.  **Build & Upload:** Connect your ESP32 and click the **PlatformIO: Upload** (arrow icon) on the bottom status bar.


<details>
  <summary><b>If you use Arduino IDE, please follow these manual steps to ensure the project compiles correctly</b></summary>
  <br>

1.  **Create Project Folder:** Create a new folder named `WeatherStation` on your computer.
2.  **Prepare Files:** 
    *   Copy the content of `src/main.cpp` into your new folder.
    *   Rename the file to **`WeatherStation.ino`** (The filename **must** match the folder name exactly).
3.  **Code Adjustment:** 
    *   Open the `.ino` file with Arduino IDE.
    *   **Remove** the line `#include <Arduino.h>` from the very top.
4.  **Install Libraries:** 
    *   Go to **Tools** -> **Manage Libraries...**
    *   Install: `Adafruit BME280 Library` and `Adafruit Unified Sensor`.
5.  **ESP32 Board Setup:**
    *   Go to **Tools -> Board -> Boards Manager**, search for `esp32`, and install the package.
6.  **Upload:**
    *   Select your board: **Tools -> Board -> ESP32 -> ESP32 DEVKIT V1**.
    *   Open **Serial Monitor** and set it to **115200 baud**.

</details>


## License
<img src="https://cdn.simpleicons.org/gplv3/BD0000" height="100" align="left" style="margin-right: 10px;">

**GNU GPL v3.0 License**  
This project is open-source. Under the GPL v3 license, you are free to copy, modify, and distribute this software, provided that any derivative works are also licensed under the GPL v3.
<br clear="left"/>
