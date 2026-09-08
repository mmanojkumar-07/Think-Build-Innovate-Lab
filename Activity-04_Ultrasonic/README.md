# Activity 04 – Ultrasonic Sensor

## 1. Objective

To measure the distance of an object using an ultrasonic sensor and Arduino by transmitting and receiving ultrasonic waves.

## 2. Components Used

1. Arduino UNO
2. HC-SR04 Ultrasonic Sensor
3. Breadboard
4. Jumper Wires

## 3. Circuit Diagram

The ultrasonic sensor circuit was designed and simulated using Tinkercad.

**Circuit Diagram:** `circuits.png`

## 4. Arduino Program

```cpp
const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
```

## 5. Output

The ultrasonic sensor measures the distance between the sensor and the object. The measured distance is displayed in centimeters through the Serial Monitor.

### Example Output

```text
Distance: 25 cm
Distance: 24 cm
Distance: 26 cm
```

## 6. Learning Outcome

* Understood the working principle of an ultrasonic sensor.
* Learned how to use the `trigPin` and `echoPin`.
* Learned how to generate an ultrasonic pulse using `digitalWrite()`.
* Learned how to measure the echo duration using `pulseIn()`.
* Learned how to calculate distance using an ultrasonic sensor.

## 7. Challenges Faced

* Checked the Trig and Echo pin connections.
* Verified the sensor power and ground connections.
* Corrected the sensor pin configuration in the Arduino program.
* Tested the sensor with objects at different distances.

## 8. Real-World Applications

* Obstacle detection
* Parking assistance systems
* Automatic doors
* Distance measurement systems

## 9. Connection to Your PoC

The ultrasonic sensor can be used for distance or obstacle detection in the proposed project, helping the system identify nearby objects and take appropriate actions.
