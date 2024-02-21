#include <Wire.h>
#include "Adafruit_SI1145.h"
#include "BluetoothSerial.h"

BluetoothSerial ESP_BT; // Object for Bluetooth
Adafruit_SI1145 uv = Adafruit_SI1145();

void setup() {
  Serial.begin(115200);
  ESP_BT.begin("UV Sensor Device"); // Start Bluetooth with the name "UV Sensor Device"

  if (!uv.begin()) {
    Serial.println("Didn't find Si1133");
    while (1);
  }
  Serial.println("Si1133 UV sensor ready!");
}

void loop() {
  float UVindex = uv.readUV();
  UVindex /= 100.0;  
  Serial.print("UV Index: "); Serial.println(UVindex);

  // Send the UV index to the first device via Bluetooth
  ESP_BT.print("UV Index: ");
  ESP_BT.println(UVindex);

  delay(2000); // Wait for 2 seconds before the next read
}
