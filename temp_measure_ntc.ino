#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int ThermistorPin = A0; // Thermistor is connected to analog pin A0
const float R1 = 10000;       // Resistor value (10 KΩ resistor)

/*
Constants for Steinhart-Hart Equation	Coefficients this value will differ 
based on the thermistor we use, I use (TC04-103) 10k Thermistor you will find the
value on the manufacturer datasheet
Mine: https://www.tec-microsystems.com/Download/Docs/Thermistors/TC04-103%203%25%20Thermistor_Specification_upd2018.pdf
*/
const float A = 1.311E-03;
const float B = 2.138E-04;
const float C = 9.430E-08;

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Initialize serial communication at 9600 baud rate:
  Serial.begin(9600);
}

void loop() {
  // Read the analog input from the thermistor
  int Vo = analogRead(ThermistorPin);

  // Calculate the resistance of the thermistor based on the analog-value
  float R2 = R1 * (1023.0 / (float)Vo - 1.0);
  
  // Calculate the temperature using the Steinhart-Hart equation
  float logR2 = log(R2);
  float T = 1.0 / (A + B * logR2 + C * logR2 * logR2 * logR2);
  float Tc = T - 273.15; // Convert temperature from Kelvin to Celsius
  float Tf = (Tc * 9.0) / 5.0 + 32.0; // Convert temperature from Celsius to Fahrenheit

  // Clear the previous values on the LCD
  lcd.clear();

  // Print temperature to LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.setCursor(0, 1);
  lcd.print(Tc);
  lcd.print(" C");
  lcd.setCursor(8, 1);
  lcd.print(Tf);
  lcd.print(" F");

  // Print temperature to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(Tc);
  Serial.print(" C; ");
  Serial.print(Tf);
  Serial.println(" F");

  // Delay before next reading
  delay(500);
}
