ACTIVITY 09 – MOTOR CONTROL

1. OBJECTIVE

To understand the control of a DC motor using an Arduino UNO and a motor driver by controlling the direction and operation of the motor.

2. COMPONENTS REQUIRED

S. No.| Apparatus / Component| Specification / Type| Quantity
1| Arduino UNO| Microcontroller Board| 1
2| DC Motor| DC Geared / Standard Motor| 1
3| Motor Driver| L293D / L298N| 1
4| Breadboard| Standard| 1
5| Jumper Wires| Male-to-Male / Male-to-Female| As required
6| External Power Supply| Suitable DC Supply| 1

3. CIRCUIT DIAGRAM

The circuit connection for controlling the DC motor using Arduino UNO and a motor driver is shown in Figure 1.

Figure 1: Motor Control Circuit

Refer to "circuit.png" for the circuit diagram.

4. CIRCUIT CONNECTION

Arduino UNO Pin| Motor Driver Pin| Purpose
Digital Pin 8| IN1| Motor direction control
Digital Pin 7| IN2| Motor direction control
Digital Pin 9| Enable / ENA| Motor enable control
GND| GND| Common ground

The DC motor is connected to the output terminals of the motor driver. The motor driver is powered using an external power supply. The Arduino UNO provides the control signals to the motor driver.

5. PROGRAM

// Activity 09 - Motor Control

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

6. WORKING PRINCIPLE

The Arduino UNO controls the DC motor through the motor driver. The direction of rotation is determined by the logic levels applied to the IN1 and IN2 input pins.

When IN1 is HIGH and IN2 is LOW, the motor rotates in the forward direction. The Enable pin is set to HIGH to allow the motor to operate. After 3 seconds, the Enable pin is set to LOW, causing the motor to stop for 2 seconds.

For reverse rotation, IN1 is set to LOW and IN2 is set to HIGH. The Enable pin is again set to HIGH, causing the motor to rotate in the reverse direction for 3 seconds. The motor then stops for another 2 seconds.

This sequence is continuously repeated by the Arduino.

7. OUTPUT

The DC motor rotates in the forward direction for 3 seconds, stops for 2 seconds, rotates in the reverse direction for 3 seconds, and stops again for 2 seconds. The sequence continues repeatedly.

8. LEARNING OUTCOMES

After completing this activity, the following concepts were understood:

1. Control of a DC motor using an Arduino UNO.
2. Direction control of a DC motor using a motor driver.
3. Use of Arduino digital output pins for motor control.
4. Use of the "digitalWrite()" function for controlling motor driver inputs.
5. Purpose and operation of the Enable pin.
6. Forward and reverse rotation of a DC motor.
7. Use of "delay()" to control the duration of motor operation.
8. Simulation of motor control circuits using Tinkercad.

9. CHALLENGES FACED AND SOLUTIONS

During the initial setup, the motor driver wiring connections were incorrect, which prevented the motor from operating as expected.

The connections between the Arduino UNO and the motor driver were checked and corrected. The IN1 and IN2 connections were verified to ensure proper direction control. The Enable pin connection was also adjusted to control the motor operation correctly.

10. REAL-WORLD APPLICATIONS

The motor control technique used in this activity can be applied in various automation systems, such as:

1. Robotic vehicles
2. Conveyor belt systems
3. Automatic doors
4. Solar panel positioning systems
5. Electric window and gate control
6. Automated machinery

11. CONNECTION TO PROOF OF CONCEPT (PoC)

The DC motor control demonstrated in this activity can be incorporated into the Smart Dual-Mode Solar Panel Controller project.

The Arduino can control the motor driver to rotate the solar panel in the forward or reverse direction. This mechanism can be used to adjust the position of the solar panel according to the required direction, enabling automated solar panel positioning.

12. RESULT

Thus, the DC motor was successfully controlled using an Arduino UNO and motor driver, and its forward, stop, and reverse operations were successfully demonstrated.
