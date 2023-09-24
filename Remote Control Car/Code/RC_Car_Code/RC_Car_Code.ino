char a;
void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  if (Serial.available () > 0)
  {
    a = Serial.read();
    Serial.println(a);
    if (a == 'F')
    {
      forward();
    }
    else if (a == 'B')
    {
      backward();
    }
    else if (a == 'S')
    {
      pause();
    }
      else if (a == 'R')
    {
      right();
    }
      else if (a == 'L')
    {
      left();
    }

  }

}
void forward()
{
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}
void backward()
{
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
}
void pause()
{
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}
void left()
{
   digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}
void right()
{
   digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
}
