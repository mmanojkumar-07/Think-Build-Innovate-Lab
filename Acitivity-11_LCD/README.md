## Activity 11 – LCD Display Interfacing

### **Objective**
To understand the interfacing of a 16x2 LCD display with Arduino and display custom text messages using the `LiquidCrystal` library.

### **Components Used**
| S.No | Component Name | Purpose |
| :--- | :--- | :--- |
| 1 | **Arduino UNO** | Microcontroller board |
| 2 | **16x2 LCD Display** | To display the text output |
| 3 | **Potentiometer** | For LCD contrast control |
| 4 | **Breadboard** | To build the circuit |
| 5 | **Jumper Wires** | For making connections |

### **Circuit Diagram**
*LCD.png* 

### **Arduino Program**
```cpp
#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
// RS=12, E=11, D4=5, D5=4, D6=3, D7=2
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2); 
}

void loop() { 
  // Set cursor to column 0, line 0 (First Row)
  lcd.setCursor(0, 0); 
  lcd.print(" HELLO....!!");

  // Set cursor to column 2, line 1 (Second Row)
  lcd.setCursor(2, 1); 
  lcd.print(" SOLDIER'ssss....!!"); 
}
```

### **Output**
The LCD displays **" HELLO....!!"** on the first row and **" SOLDIER'ssss....!!"** on the second row, both starting at the specified cursor positions.

### **Learning Outcome**
* Understood the use of the `LiquidCrystal` library.
* Learned how to initialize an LCD using `lcd.begin()`.
* Learned how to use `lcd.setCursor()` to position text exactly where needed.
* Learned how to use `lcd.print()` to display custom messages.
* Understood the wiring configuration for LCD pins (RS, E, D4–D7).

### **Challenges Faced**
* Initial display showed no output due to incorrect contrast adjustment. Corrected the potentiometer connection to fix the contrast issue.
* A minor pin mismatch between the code and hardware wiring was identified and fixed.

### **Real-World Applications**
* Status and information display panels in industrial machines.
* User interfaces for embedded systems.
* Menu displays in everyday electronic devices (e.g., printers, microwaves).

### **Connection to Your PoC**
The LCD can be used to display real-time status information such as battery voltage, charging mode, and system alerts in the **Smart Dual-Mode Solar Panel Controller** project.
