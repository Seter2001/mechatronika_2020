int buttonState;

void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(2);
if (buttonState == HIGH)
{
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
}
  else
  {
    digitalWrite(13, LOW);
  }
}
