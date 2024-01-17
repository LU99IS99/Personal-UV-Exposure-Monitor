# Personal-UV-Exposure-Monitor
This wearable device continually measures UV radiation exposure, providing real-time alerts to users about harmful UV levels. Designed to promote skin health, it's especially useful for outdoor enthusiasts or those with sensitive skin. The project combines a UV sensing device with a user-friendly display unit, employing wireless communication for seamless data transfer.
## Sensor Device Slide
The core of this project is the Si1133 UV Index Sensor, a compact unit ideal for wearable tech. It accurately measures UV radiation levels, ensuring timely data collection.
![image](https://github.com/LU99IS99/Personal-UV-Exposure-Monitor/assets/133922082/7a0c5158-36a8-465c-9bb8-e83836fbd194)

### Key Features:

High UV measurement accuracy.
Low power consumption, suitable for battery-operated devices.
Small form factor, ideal for a wearable device.
## Display Device Slide
The display device prominently features a stepper motor-driven gauge needle, providing a visually intuitive indication of UV exposure levels. This analog-style display is user-friendly and offers an easy-to-understand representation of real-time UV data.
stepper motor-driven gauge needle
![image](https://github.com/LU99IS99/Personal-UV-Exposure-Monitor/assets/133922082/fe76b335-75f0-44f1-b227-d4821909a4da)
LED Lights
![image](https://github.com/LU99IS99/Personal-UV-Exposure-Monitor/assets/133922082/26b31cf4-fc3d-4618-a84d-a006a7ef620a)

### Key Components:
Stepper Motor: Drives the gauge needle to represent UV exposure level.
LED Indicator: Changes color based on UV intensity (e.g., green for safe, red for high).
Control Button: Allows user interaction for settings or to view different metrics.
## Communication Slide
The sensor and display devices communicate via Bluetooth Low Energy (BLE), offering a balance between energy efficiency and range.
### Communication Flow
The sensor device continuously sends UV data to the display unit.
BLE ensures timely updates and minimal power consumption.
