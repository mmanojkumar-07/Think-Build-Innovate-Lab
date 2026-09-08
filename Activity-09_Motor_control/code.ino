int in1 = 8;
int in2 = 7;
int enable = 9;

void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enable, OUTPUT);
}

void loop()
{
  // Motor Forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(enable, HIGH);

  delay(3000);

  // Motor Stop
  digitalWrite(enable, LOW);

  delay(2000);

  // Motor Reverse
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(enable, HIGH);

  delay(3000);

  // Motor Stop
  digitalWrite(enable, LOW);

  delay(2000);
}
