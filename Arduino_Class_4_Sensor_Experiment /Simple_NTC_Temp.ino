/*
  NTC Thermistor Temperature Measurement using Steinhart-Hart Equation

  Wiring Instructions:
  - Connect one leg of the 10K NTC thermistor to GND.
  - Connect the other leg of the thermistor to Arduino Analog pin A0.
  - Connect a 10K resistor between the Arduino 5V pin and Analog pin A0.
  
  So, the Analog pin A0 is connected between the thermistor and the resistor,
  forming a voltage divider.

  This code reads the analog voltage, calculates the thermistor resistance,
  and converts it to temperature in Celsius.
*/

#include <math.h>  // for log() function

int sensorPin = A0;  // Analog input pin for thermistor
float temperatureC;

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud
}

void loop() {
  int analogValue = analogRead(sensorPin);  // Read analog input (0-1023)

  // Calculate resistance of thermistor
  float resistance = (1023.0 / (float)analogValue) - 1.0;
  resistance = 10000.0 / resistance;  // Using 10K resistor in voltage divider

  // Apply Steinhart-Hart equation
  float steinhart;
  steinhart = resistance / 10000.0;          // (R / R0)
  steinhart = log(steinhart);                // ln(R / R0)
  steinhart /= 3950.0;                       // Divide by Beta coefficient
  steinhart += 1.0 / (25.0 + 273.15);       // Add (1 / T0) where T0 is 25°C in Kelvin
  steinhart = 1.0 / steinhart;               // Invert to get Kelvin temperature
  temperatureC = steinhart - 273.15;         // Convert Kelvin to Celsius

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);  // Wait 1 second before next reading
}
