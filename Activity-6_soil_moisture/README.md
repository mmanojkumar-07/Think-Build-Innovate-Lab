Activity 06 – Soil Moisture Sensor
Objective

To understand analog input programming using Arduino by reading soil moisture levels with a soil moisture sensor.

Components Used
Arduino UNO
Soil Moisture Sensor (with analog output module)
LED (optional, for dry-soil indication)
220 Ω Resistor (if using LED)
Breadboard
Jumper Wires
Circuit Diagram

See circuit.png.

Arduino Program
// C++ code
int sensorPin = A0;   // Soil moisture sensor connected to analog pin A0
int led = 13;          // LED connected to digital pin 13
int sensorValue = 0;
int threshold = 500;   // Adjust based on calibration

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);   // Read moisture level (0-1023)
  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);

  if (sensorValue > threshold)
  {
    // Higher value usually means drier soil
    digitalWrite(led, HIGH);   // Turn LED ON to indicate dry soil
  }
  else
  {
    digitalWrite(led, LOW);    // Turn LED OFF, soil is moist
  }

  delay(1000); // Read every 1 second
}
Output

The Serial Monitor displays real-time soil moisture values (0–1023). When the soil is dry (value above the set threshold), the LED turns ON to indicate low moisture. When the soil is moist, the LED remains OFF.

Learning Outcome
Understood the use of analog input pins.
Learned how to use analogRead().
Learned how to use Serial.begin() and Serial.println() for monitoring sensor data.
Understood how threshold values are used to make decisions based on sensor readings.
Learned how to simulate soil moisture sensor circuits in Tinkercad.
Challenges Faced
Initial sensor readings were inconsistent due to incorrect calibration of the threshold value.
Corrected the wiring between the sensor module, Arduino, and power supply.
Real-World Applications
Automated irrigation systems
Smart agriculture and farm monitoring
Greenhouse moisture control systems
Connection to Your PoC

The soil moisture sensor can be integrated into the Smart Dual-Mode Solar Panel Controller project to enable automated irrigation, allowing the system to water plants only when necessary and conserve energy and water resources.
