## Temprature Monitering System

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

#### Final Result
![](/Demonstration.mp4)

![Final Outcome](/Result.jpg)

#### Features

It can measure temperatures from -40°C to 125°C and provides accurate measurements. When using the **[I2C module](https://www.electronicscomp.com/i2c-module-16x2-lcd-india?srsltid=AfmBOoo_OunJQKyrvgO4lYpPjTXFSa2Co8LRwglQHA_mQwI4zz0fai8h)**, you can significantly reduce the number of connecting wires for the LCD display.

### Conclusion

By following these connections and using the components listed, you can assemble a temperature meter using an Arduino and an LCD display. This setup allows you to read temperature data from the NTC thermistor and display it on the LCD screen effectively.
