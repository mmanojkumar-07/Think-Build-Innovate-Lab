# Activity 03 – Potentiometer with LED

## 1. Objective

To understand analog input programming using Arduino by controlling the brightness of an LED using a potentiometer.

## 2. Components Used

1. Arduino UNO
2. Potentiometer
3. LED
4. 220 Ω Resistor
5. Breadboard
6. Jumper Wires

## 3. Circuit Diagram

The circuit diagram shows the connection between the Arduino UNO, potentiometer, LED, and resistor.

**Circuit Diagram:** `circuit.png`

## 4. Arduino Program

```cpp
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
```

## 5. Output

The LED brightness changes according to the position of the potentiometer. When the potentiometer is rotated, the LED changes between three brightness levels:

* **Low potentiometer value:** Dim LED
* **Medium potentiometer value:** Medium brightness
* **High potentiometer value:** Bright LED

## 6. Learning Outcome

* Understood the working principle of a potentiometer.
* Learned how to use `analogRead()`.
* Learned how to use `analogWrite()`.
* Understood PWM-based LED brightness control.
* Learned how to interface a potentiometer with Arduino.

## 7. Challenges Faced

* Checked the potentiometer connections.
* Verified the LED and resistor connections.
* Tested different potentiometer positions to obtain different LED brightness levels.

## 8. Real-World Applications

* LED brightness control
* Volume control
* Motor speed control
* User control systems

## 9. Connection to Your PoC

The potentiometer can be used as a manual control input to adjust different parameters in the **Smart Dual-Mode Solar Panel Controller** project.
