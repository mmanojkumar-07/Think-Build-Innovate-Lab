const int sensorPin = A0;

const int redLED = 13;
const int greenLED = 12;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(sensorPin);

  Serial.print("Moisture Value: ");
  Serial.println(moisture);

  if (moisture > 500) {
    // Dry soil
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  else {
    // Wet soil
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(500);
}
