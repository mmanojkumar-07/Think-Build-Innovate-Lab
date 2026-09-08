# Activity 07 – Buzzer

## 1. Objective

To understand how to interface a buzzer with Arduino and generate an audible sound by controlling the buzzer using a digital output pin.

## 2. Components Used

1. Arduino UNO
2. Buzzer
3. Breadboard
4. Jumper Wires

## 3. Circuit Diagram

The buzzer circuit was designed and simulated using Tinkercad.

**Circuit Diagram:** `circuit7.png`

## 4. Arduino Program

The Arduino program is stored in the file `code.ino`.

```cpp
int buzzer = 8;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(buzzer, HIGH);
  delay(1000);

  digitalWrite(buzzer, LOW);
  delay(1000);
}
```

## 5. Output

When the Arduino program is executed, the buzzer turns **ON** for one second and then turns **OFF** for one second. This process repeats continuously.

### Example Output

```text
Buzzer ON
Buzzer OFF
Buzzer ON
Buzzer OFF
```

## 6. Learning Outcome

* Understood the working principle of a buzzer.
* Learned how to interface a buzzer with Arduino.
* Learned how to use `pinMode()` to configure a digital output.
* Learned how to control a buzzer using `digitalWrite()`.
* Understood how `delay()` can be used to control the buzzer timing.

## 7. Challenges Faced

* Checked the buzzer connections.
* Verified the power and ground connections.
* Corrected the buzzer pin configuration in the Arduino program.
* Tested different delay values to control the buzzer ON and OFF duration.

## 8. Real-World Applications

* Alarm systems
* Security systems
* Electronic doorbells
* Warning and notification systems
* Home automation systems

## 9. Connection to Your PoC

The buzzer can be used as an **alert or warning device** in the proposed project. It can produce an audible indication when a specific condition or event is detected by the system.

