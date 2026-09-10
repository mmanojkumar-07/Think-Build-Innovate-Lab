# Activity 10 – Seven Segment Display

## Objective

To interface a seven-segment display with an Arduino UNO and display the numbers from 0 to 9 sequentially by controlling the individual segments using digital output pins.

## Components Required

| S. No. | Apparatus / Component | Specification / Type | Quantity |
|--------|------------------------|----------------------|----------|
| 1 | Arduino UNO | Microcontroller Board | 1 |
| 2 | Seven Segment Display | Common Cathode | 1 |
| 3 | Resistors | 220 Ω | 8 |
| 4 | Breadboard | Standard | 1 |
| 5 | Jumper Wires | Male-to-Male | As required |
| 6 | USB Cable | Arduino Compatible | 1 |

## Circuit Diagram

The circuit connection for interfacing the seven-segment display with Arduino UNO is shown in Figure 1.

**Figure 1: Seven Segment Display Circuit**

Refer to `circuit10.png` for the circuit diagram.

## Circuit Connection

The seven-segment display consists of seven main LED segments named A, B, C, D, E, F, and G. An additional connection H is used in the given program.

Each segment is connected to an Arduino digital pin through a 220 Ω resistor.

| Seven Segment Pin | Arduino UNO Pin | Purpose |
|-------------------|-----------------|---------|
| A | 13 | Segment A control |
| B | 12 | Segment B control |
| C | 11 | Segment C control |
| D | 10 | Segment D control |
| E | 9 | Segment E control |
| F | 8 | Segment F control |
| G | 7 | Segment G control |
| H | 6 | Additional display connection |

The common connection of the seven-segment display is connected according to the display configuration used in the Tinkercad simulation.

## Program

The Arduino program is stored in the file `code.ino`.

```cpp
unsigned const int A = 13;
unsigned const int B = 12;
unsigned const int C = 11;
unsigned const int D = 10;
unsigned const int E = 9;
unsigned const int F = 8;
unsigned const int G = 7;
unsigned const int H = 6;

void setup(void)
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
}

void zero(void)
{
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void one(void)
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void two(void)
{
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void three(void)
{
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void four(void)
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void five(void)
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void six(void)
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void seven(void)
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void eight(void)
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void nine(void)
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void loop(void)
{
  zero();
  delay(1000);

  one();
  delay(1000);

  two();
  delay(1000);

  three();
  delay(1000);

  four();
  delay(1000);

  five();
  delay(1000);

  six();
  delay(1000);

  seven();
  delay(1000);

  eight();
  delay(1000);

  nine();
  delay(1000);
}
Working Principle

The seven-segment display consists of individual LED segments that are controlled by the Arduino UNO. The segments are represented by A, B, C, D, E, F, G, and H in the program.

Different combinations of HIGH and LOW signals are applied to the segments to produce different numerical digits.

Separate functions such as zero(), one(), two(), and so on are created for displaying each number. When a function is called, the required segments are switched ON and the other segments are switched OFF.

The loop() function calls the digit functions sequentially with a delay of 1 second between each number.

The display continuously follows the sequence:

0 → 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → repeat

Output

The seven-segment display successfully displays the numbers from 0 to 9 sequentially.

Each number remains displayed for approximately 1 second before changing to the next number.

Example Output
0
1
2
3
4
5
6
7
8
9

After displaying 9, the display starts again from 0.

Learning Outcomes

After completing this activity, the following concepts were understood:

Interfacing a seven-segment display with an Arduino UNO.
Identifying the individual segments of a seven-segment display.
Controlling display segments using Arduino digital output pins.
Using the pinMode() and digitalWrite() functions.
Creating separate functions for displaying different digits.
Understanding different segment combinations used to display numbers.
Using delay() to control display timing.
Simulating a seven-segment display circuit using Tinkercad.
Challenges Faced and Solutions

During the initial setup, identifying the correct segment connections of the seven-segment display was a challenge.

The connections between the Arduino UNO and the display were checked and corrected. The 220 Ω resistors were connected properly to protect the LED segments.

The ON/OFF conditions for each digit were also verified to ensure that the numbers were displayed correctly. The Tinkercad simulation was tested repeatedly to check the complete sequence from 0 to 9.

Real-World Applications

The seven-segment display technique can be applied in various electronic and automation systems, such as:

Digital clocks
Digital counters
Calculators
Electronic weighing machines
Digital meters
Elevator floor indicators
Electronic scoreboards
Temperature display systems
Connection to Proof of Concept (PoC)

The seven-segment display demonstrated in this activity can be incorporated into an Arduino-based automation project to provide a simple numerical display.

It can be used to display values such as object counts, sensor readings, operating modes, or system status. This provides an easy-to-understand visual interface for the user.
