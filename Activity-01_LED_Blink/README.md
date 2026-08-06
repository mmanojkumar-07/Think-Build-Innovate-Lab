# Activity 01 – LED Blink

## Objective
To understand digital output programming using Arduino by blinking an LED.

## Components Used
- Arduino UNO
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires

## Circuit Diagram
See `circuit.png`.

## Arduino Program

```cpp
// C++ code
int led = 13;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(2000); // LED ON for 2 seconds

  digitalWrite(led, LOW);
  delay(1000); // LED OFF for 1 second
}
```

## Output
The LED blinks continuously. It remains ON for 2 seconds and OFF for 1 second.

## Learning Outcome
- Understood the use of digital output pins.
- Learned how to use `pinMode()`.
- Learned how to use `digitalWrite()`.
- Understood the purpose of `delay()`.
- Learned how to simulate Arduino circuits in Tinkercad.

## Challenges Faced
- Initial wiring connections were incorrect.
- Corrected the LED polarity and resistor connections.

## Real-World Applications
- Status indicators
- Power indication systems
- Warning and alert systems

## Connection to Your PoC
The LED can be used as a status indicator in the Smart Dual-Mode Solar Panel Controller project.
