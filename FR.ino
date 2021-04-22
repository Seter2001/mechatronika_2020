const int R = A0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(R, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int FRS = analogRead(R);
delay(1000);
Serial.println(FRS);
}
