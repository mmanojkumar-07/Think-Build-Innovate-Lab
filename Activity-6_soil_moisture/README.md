Activity 06 - Soil Moisture Sensor

Objective

To understand analog input programming using Arduino by reading soil moisture levels with a soil moisture sensor.

Components Used
Arduino UNO[span_4](start_span)[span_4](end_span)
Soil Moisture Sensor (with analog output module)
LED (optional, for dry-soil indication)
220 Ω Resistor (if using LED)[span_5](start_span)[span_5](end_span)
Breadboard[span_6](start_span)[span_6](end_span)
Jumper Wires[span_7](start_span)[span_7](end_span)

Circuit Diagram

See circuit.png.[span_8](start_span)[span_8](end_span)

Arduino Program
// C++ code
int sensorPin = A0;   // Soil moisture sensor connected to analog pin A0
int led = 13;         // LED connected to digital pin 13
int sensorValue = 0;
int threshold = 500;  // Adjust based on calibration

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);[span_9](start_span)[span_9](end_span)
}

void loop()
{
  sensorValue = analogRead(sensorPin);[span_10](start_span)[span_10](end_span)
  Serial.print("Moisture Value: ");
  Serial.println(sensorValue);
  
  if (sensorValue < threshold) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
  delay(1000);[span_11](start_span)[span_11](end_span)
}

Output
![Simulation Output](circuit.png)[span_12](start_span)[span_12](end_span)

Learning Outcome
- Understood analog input reading with Arduino `analogRead()`[span_13](start_span)[span_13](end_span).
- Learned how to configure pin modes for output indicators.
- Understood threshold mapping for threshold-based conditional automation.

Challenges Faced
- **Error:** Unstable sensor readings due to fluctuating analog input noise.
- **Solution:** Added a short delay and secured breadboard connections to pin A0[span_14](start_span)[span_14](end_span).

Real-World Applications
- Automated agricultural irrigation systems[span_15](start_span)[span_15](end_span)
- Smart plant watering pots[span_16](start_span)[span_16](end_span)

Connection to Your PoC
The soil moisture sensor activity serves as the primary input module for my Smart Irrigation System Proof of Concept, automating water pumps based on soil dryness[span_17](start_span)[span_17](end_span).
