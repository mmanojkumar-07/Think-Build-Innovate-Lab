# Activity 02 – Push Button with LED

## Objective
To understand digital input programming using a push button and control an LED using Arduino.

## Components Used
- Arduino UNO
- Breadboard
- Push Button
- LED
- 220 Ω Resistor
- 10 kΩ Resistor
- Jumper Wires

## Circuit Diagram
The push button and LED circuit was designed and simulated using Tinkercad.

![Circuit Diagram](circuit.png)

## Arduino Program

```cpp
int led = 13;
int button = 2;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  int buttonState = digitalRead(button);

  if (buttonState == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
```

## Output
When the push button is pressed, the LED turns ON. When the push button is released, the LED turns OFF.

## Learning Outcome
- Understood digital input and output pins.
- Learned how to use `digitalRead()`.
- Learned how to use `digitalWrite()`.
- Understood the working of a push button.
- Learned how to control an LED using a digital input.

## Challenges Faced
- Initially, the push button connections were checked and corrected.
- The LED and resistor connections were verified to obtain the expected output.

## Real-World Applications
- Doorbell systems
- Control panels
- Digital switches
- Emergency alert systems

## Connection to Your PoC
The push button concept can be used as a manual control or reset button in the Smart Dual-Mode Solar Panel Controller project.
