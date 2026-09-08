# Activity 08 – Temperature Sensor

## Objective

To measure temperature using a TMP36 temperature sensor and Arduino UNO, and indicate different temperature levels using red, yellow, and green LEDs.

## Components Used

- Arduino UNO
- TMP36 Temperature Sensor
- Red LED
- Yellow LED
- Green LED
- 220 Ω Resistors
- Breadboard
- Jumper Wires

## Circuit Diagram

The temperature sensor circuit was designed and simulated using Tinkercad.

See `circuit8.png`.

## Arduino Program

The Arduino program is stored in the file `code.ino`.

```cpp
int tempPin = A0;

int redLED = 2;
int yellowLED = 3;
int greenLED = 4;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(tempPin);

  float voltage = value * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature >= 30)
  {
    // High temperature
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  }
  else if (temperature >= 20)
  {
    // Medium temperature
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  else
  {
    // Low temperature
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(1000);
}
```

## Output

The TMP36 temperature sensor measures the surrounding temperature and sends an analog signal to the Arduino. The Arduino converts the sensor reading into temperature in degrees Celsius and displays the value through the Serial Monitor.

The LEDs indicate the temperature level:

- Green LED ON – Low temperature
- Yellow LED ON – Medium temperature
- Red LED ON – High temperature

### Example Output

```text
Temperature: 18 C
Temperature: 22 C
Temperature: 31 C
```

## Learning Outcome

- Understood the working principle of a TMP36 temperature sensor.
- Learned how to use `analogRead()`.
- Learned how to convert analog voltage into temperature.
- Learned how to control multiple LEDs based on temperature.
- Understood conditional statements for temperature-based control.
- Learned how to display sensor readings using the Serial Monitor.

## Challenges Faced

- Checked the TMP36 sensor connections.
- Verified the sensor power and ground connections.
- Corrected the analog input pin configuration.
- Verified the LED and resistor connections.
- Tested different temperature values to check the LED indications.

## Real-World Applications

- Temperature monitoring systems
- Automatic cooling systems
- Smart home automation
- Weather monitoring systems
- Industrial temperature monitoring
- Electronic safety systems

## Connection to Your PoC

The temperature sensor can be used to monitor environmental temperature in the proposed project. The LED indicators provide a simple visual alert for low, medium, and high temperature conditions, helping the system take appropriate actions based on the measured temperature.
