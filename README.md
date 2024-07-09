## 🌡️ Temperature Meter - Using Thermistor and Arduino With LCD 16x2 Display

In this project, we will create a temperature meter using a thermistor and Arduino. Before building this project, it's essential to understand the key component: the thermistor.

### What is a Thermistor?

A thermistor, short for Thermal Resistor, is a type of resistor whose resistance changes with temperature. This component finds widespread use in various electronic circuits, such as SMPS, battery packs (for temperature detection), charging circuits, thermometers, and more.

### Types of Thermistors

There are two main types of thermistors:

- **NTC (Negative Temperature Coefficient)**: The resistance decreases as temperature increases.
- **PTC (Positive Temperature Coefficient)**: The resistance increases as temperature increases.

For this project, we will use an NTC thermistor.

### Components Required

- NTC Thermistor (10kΩ)
- 10kΩ Fixed Resistor
- 220Ω Fixed Resistor (for LCD)
- 10K Potentiometer (for LCD)
- 16x2 LCD Display
- Arduino UNO R3
- Connecting wires as required!

### Connection Instructions

#### LCD to Arduino Connections:

- **LCD D4 pin** to digital pin 5
- **LCD D5 pin** to digital pin 4
- **LCD D6 pin** to digital pin 3
- **LCD D7 pin** to digital pin 2
- **LCD RS pin** to digital pin 12
- **LCD Enable pin** to digital pin 11
- **LCD R/W pin** to GND
- **LCD VSS pin** to GND
- **LCD VCC pin** to 5V
- **LCD LED+** to 5V through a 220-ohm resistor
- **LCD LED-** to GND

#### Additional Adjustment:

For contrast adjustment (recommended), wire a 10k potentiometer to +5V and GND of the Arduino. Connect the wiper pin (center pin) of the potentiometer to the LCD screen's VO pin (pin 3).

#### Circuit Diagram

![Circuit Diagram for this project](/Circuit%20Diagram.png)

#### Testing

![Result](/Demonstration.mp4)


![Final Outcome](/Result.jpg)

#### Features

It can measure temperatures from -40°C to 125°C and provides accurate measurements. When using the **I2C module**, you can significantly reduce the number of connecting wires for the LCD display.

#### Additional Considerations:

1. Don't forget to install the **LiquidCrystal** library for the LCD display if it is not installed by default.

Go to Sketch -> Include Library -> Manage Libraries...

Search `LiquidCrystal` and install the latest version.

2. Ensure the circuit connection is stable; if it isn't, it may show incorrect outputs on the display.

### Conclusion

By following these connections and using the components listed, you can assemble a temperature meter using an Arduino and an LCD display. This setup allows you to read temperature data from the NTC thermistor and display it on the LCD screen effectively.