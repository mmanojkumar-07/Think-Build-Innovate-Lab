Activity 11 – LCD Display Interfacing

Objective
To understand the interfacing of a 16x2 LCD display with Arduino and display custom text messages using the LiquidCrystal library.

Components Used

Arduino UNO
16x2 LCD Display
Potentiometer (for contrast control)
Breadboard
Jumper Wires

Circuit Diagram
LCD.png.

Arduino Program

cpp
#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("   HELLO....!!");

  lcd.setCursor(2, 1);
  lcd.print(" SOLDIER'ssss....!!");
}

Output
The LCD displays "HELLO....!!" on the first row and "SOLDIER'ssss....!!" on the second row, both starting at the specified cursor positions.

Learning Outcome

Understood the use of the LiquidCrystal library.
Learned how to initialize an LCD using lcd.begin().
Learned how to use lcd.setCursor() to position text.
Learned how to use lcd.print() to display messages.
Understood the wiring configuration for LCD pins (RS, E, D4–D7).

Challenges Faced

Initial display showed no output due to incorrect contrast adjustment.
Corrected potentiometer connection to fix contrast.
Minor pin mismatch between code and wiring was identified and fixed.

Real-World Applications

Status and information display panels
User interface for embedded systems
Menu display in electronic devices

Connection to Your PoC
The LCD can be used to display real-time status information such as battery voltage, charging mode, and system alerts in the Smart Dual-Mode Solar Panel Controller project.
