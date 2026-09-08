Activity 09 – Motor Control
 
Objective
To understand motor control using an Arduino and a motor driver by controlling the direction and operation of a DC motor.
 
Components Used
- Arduino UNO
- DC Motor
- Motor Driver (L293D / L298N)
- Breadboard
- Jumper Wires
- External Power Supply
 
Circuit Diagram
See circuit.png.
 
Arduino Program
 
int in1 = 8;
int in2 = 7;
int enable = 9;
 
void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enable, OUTPUT);
}
 
void loop()
{
  // Motor Forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(enable, HIGH);
 
  delay(3000);
 
  // Motor Stop
  digitalWrite(enable, LOW);
 
  delay(2000);
 
  // Motor Reverse
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(enable, HIGH);
 
  delay(3000);
 
  // Motor Stop
  digitalWrite(enable, LOW);
 
  delay(2000);
}
 
Output
The DC motor rotates in the forward direction for 3 seconds, stops for 2 seconds, and then rotates in the reverse direction for 3 seconds. It stops again for 2 seconds before repeating the sequence continuously.
 
Learning Outcome
- Understood how to control a DC motor using Arduino.
- Learned how to use digital output pins for motor direction control.
- Learned how digitalWrite() can be used to control motor driver inputs.
- Understood the purpose of the enable pin in motor control.
- Learned how to control the forward and reverse rotation of a motor.
- Understood how to use delays to control the timing of motor operation.
- Learned how to simulate motor control circuits in Tinkercad.
 
Challenges Faced
- Initial motor driver wiring connections were incorrect.
- Corrected the connections between the Arduino and motor driver.
- Verified the motor direction control using the IN1 and IN2 pins.
- Adjusted the enable pin connection to control the motor operation correctly.
 
Real-World Applications
- Robotic vehicles
- Conveyor belt systems
- Automatic doors
- Solar panel positioning systems
- Electric window and gate control
- Automated machinery
 
Connection to Your PoC
The motor can be used to control the movement of the solar panel in the Smart Dual-Mode Solar Panel Controller project. The Arduino can control the motor driver to rotate the solar panel forward or reverse, allowing the panel to adjust its position according to the required direction.
 
