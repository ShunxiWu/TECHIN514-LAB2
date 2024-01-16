#include <Arduino.h>

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int adcValue = analogRead(D0); // Read ADC value from pin A0
  float voltage = (adcValue / 4095.0) * 3.3; // Convert ADC value to volts
  
  Serial.print("ADC Value: ");
  Serial.println(adcValue);
  Serial.print("Voltage: ");
  Serial.print(voltage, 3); // Print voltage with 3 decimal places
  
  // Execute other operations...
  
  delay(1000); // Delay for 1 second
}
