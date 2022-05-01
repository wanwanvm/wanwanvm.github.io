#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.print("PENGGUNAAN i2C");
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("PENGGUNAAN I2C");
  lcd.setCursor(0,1);
  lcd.print("wanwanvm.github.io");
}
