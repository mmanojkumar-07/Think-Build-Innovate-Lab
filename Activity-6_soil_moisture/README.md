# Activity 06 – Soil Moisture Sensor

## 1. Objective

To monitor soil moisture levels using a soil moisture sensor and provide visual status indicators through dual-colored LEDs using an Arduino UNO.

## 2. Components Used

1. Arduino UNO
2. Soil Moisture Sensor with Module
3. Red LED
4. Green LED
5. 220 Ω Resistor
6. Breadboard
7. Jumper Wires

## 3. Circuit Diagram

The soil moisture sensor circuit was designed and simulated using Tinkercad.

**Circuit Diagram:** `circuit6.png`

## 4. Arduino Program

The Arduino program is stored in the file `code.ino`.

```cpp
const int sensorPin = A0;

const int redLED = 13;
const int greenLED = 12;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int moisture = analogRead(sensorPin);

  Serial.print("Moisture Value: ");
  Serial.println(moisture);

  if (moisture > 500)
  {
    // Dry soil
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  else
  {
    // Wet soil
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(500);
}
```

## 5. Output

The soil moisture sensor measures the moisture level in the soil and displays the moisture value through the Serial Monitor.

The LEDs indicate the soil condition:

* **Red LED ON:** Dry soil
* **Green LED ON:** Wet soil

### Example Output

```text
Moisture Value: 650
Moisture Value: 620
Moisture Value: 480
Moisture Value: 450
```

When the moisture value is greater than **500**, the system identifies the soil as dry and turns ON the red LED. When the value is **500 or below**, the system identifies the soil as wet and turns ON the green LED.

## 6. Learning Outcome

* Understood how to configure and use analog input pins with `analogRead()`.
* Learned how to control multiple digital outputs using Arduino.
* Learned how to use LEDs as visual status indicators.
* Understood conditional threshold logic for hardware control.
* Learned how to monitor environmental data using a soil moisture sensor.

## 7. Challenges Faced

**Challenge:** Confusion about the sensor threshold values caused incorrect or unexpected LED switching.

**Solution:** Monitored the sensor values using the Serial Monitor and analyzed the live readings. The threshold value was then fine-tuned to **500** to distinguish between dry and wet soil conditions.

## 8. Real-World Applications

* Automated agricultural irrigation systems
* Smart plant watering pots
* Smart gardening systems
* Soil condition monitoring systems

## 9. Connection to Your PoC

This dual-indicator soil moisture setup can serve as the **visual alert subsystem** for the proposed **Smart Irrigation System Proof of Concept (PoC)**. The red and green LEDs provide a clear indication of dry and wet soil conditions, helping the system determine when irrigation may be required.
