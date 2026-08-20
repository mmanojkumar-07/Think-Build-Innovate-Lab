int pot = A0;
int led = 5;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  int value = analogRead(pot);

  if (value < 300)
  {
    analogWrite(led, 50);
  }
  else if (value < 700)
  {
    analogWrite(led, 150);
  }
  else
  {
    analogWrite(led, 255);
  }
}
