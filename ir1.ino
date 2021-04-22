#include <IRremote.h>

int IRpin = 11;
IRrecv irrecv(IRpin);
decode_results results;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(13, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (irrecv.decode())
  {
    Serial.println(results.value, DEC);
    irrecv.resume();
    
 
   }
   if (irrecv.decode()){
   digitalWrite(13, HIGH);
   delay(1000);
   
   }
   else{
    digitalWrite(13,LOW);
    }
  
   }
