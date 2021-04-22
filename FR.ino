const int R = A0;

void setup() {
Serial.begin(9600);
pinMode(R, INPUT);
}

void loop() {
int FRS = analogRead(R);
delay(1000);
Serial.println(FRS);
}
