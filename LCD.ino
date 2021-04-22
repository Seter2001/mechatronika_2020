#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
uint8_t duck[8]  = {0x0,0xc,0x1d,0xf,0xf,0x6,0x0};
LiquidCrystal_I2C lcd(0x27,20,4); 

#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif

void setup()
{
  lcd.init();                      
  lcd.init();
  lcd.backlight();

  lcd.createChar(4, duck);
  lcd.setCursor(4,0);
  lcd.print("IM II SEM");
  lcd.setCursor(4,1);
  lcd.printByte(4);
  lcd.print(" kaczka");
}
void loop()
{
}
