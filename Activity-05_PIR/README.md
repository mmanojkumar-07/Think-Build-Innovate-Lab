# Activity 05 – PIR Sensor

## 1. Objective

To detect the movement of a person or object using a PIR sensor and Arduino.

## 2. Components Used

- Arduino UNO
- PIR Motion Sensor
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires

## 3. Circuit Diagram

The PIR sensor circuit was designed and simulated using Tinkercad.

![PIR Sensor Circuit](circuit.png)

## 4. Arduino Program

# The Arduino program is stored in the file `code.ino`.


int pirPin = 2;
int ledPin = 13;

void setup()
{
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int motion = digitalRead(pirPin);

  if (motion == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion");
  }

  delay(500);
}
## 5. Output

When motion is detected by the PIR sensor, the LED turns ON and the Serial Monitor displays "Motion Detected". When there is no motion, the LED remains OFF and the Serial Monitor displays "No Motion".

6. Learning Outcome

Understood the working principle of a PIR motion sensor.
Learned how to use digitalRead().
Learned how to control an LED using digitalWrite().
Learned how to interface a PIR sensor with Arduino.
Understood motion detection using Arduino.

7. Challenges Faced

Checked the PIR sensor connections.
Verified the power and ground connections.
Corrected the PIR sensor input pin configuration.
Tested the sensor by detecting movement.

8. Real-World Applications

Automatic lighting systems
Security alarm systems
Motion detection systems
Smart home automation

9. Connection to Your PoC

The PIR sensor can be used to detect human presence or movement and trigger specific actions in the proposed project.
