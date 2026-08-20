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

See circuit.png.

Arduino Program
int pot = A0;
int led = 5;


void setup()
{
  pinMode(led, OUTPUT);
}


void loop()
{
  int value = analogRead(pot);


  if (value < 300)
  {
    analogWrite(led, 50);
  }
  else if (value < 700)
  {
    analogWrite(led, 150);
  }
  else
  {
    analogWrite(led, 255);
  }
}
Output

The LED brightness changes according to the position of the potentiometer. When the potentiometer is rotated, the LED changes between dim, medium, and bright levels.

Learning Outcome
Understood the working of a potentiometer.
Learned how to read analog values using analogRead().
Learned how to control LED brightness using analogWrite().
Understood PWM-based brightness control.
Learned how to interface a potentiometer with Arduino.
Challenges Faced
Checked the potentiometer connections.
Verified the LED and resistor connections.
Tested different potentiometer positions to obtain different LED brightness levels.
Real-World Applications
LED brightness control
Volume control
Motor speed control
User control systems
Connection to Your PoC

The potentiometer can be used as a manual control input to adjust different parameters in the proposed project.
