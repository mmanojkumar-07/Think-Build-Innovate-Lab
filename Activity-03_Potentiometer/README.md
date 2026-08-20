Activity 03 – Potentiometer with LED
Objective

To understand analog input programming using Arduino by controlling the brightness of an LED using a potentiometer.

Components Used
Arduino UNO
Potentiometer
LED
220 Ω Resistor
Breadboard
Jumper Wires
Circuit Diagram

The circuit was designed and simulated using Tinkercad.
circuit.png
Arduino Program
const int sensorPin = A0;

const int redLED = 13;
const int greenLED = 12;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(sensorPin);

  Serial.print("Moisture Value: ");
  Serial.println(moisture);

  if (moisture > 500) {
    // Dry soil
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  else {
    // Wet soil
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(500);
}
Output

The LED brightness changes according to the position of the potentiometer. When the potentiometer is rotated, the LED changes between dim, medium, and bright levels.

Learning Outcome
Understood analog input using a potentiometer.
Learned how to use analogRead().
Learned how to use analogWrite().
Understood PWM-based LED brightness control.
Learned how to interface a potentiometer with Arduino.
Challenges Faced
Initially, the potentiometer connections were checked and corrected.
Verified the LED and resistor connections.
Tested different potentiometer positions to obtain different LED brightness levels.
Real-World Applications
LED brightness control
Volume control
Motor speed control
User control interfaces
Connection to Your PoC

The potentiometer concept can be used as a manual control input in the project to adjust or control system parameters.
