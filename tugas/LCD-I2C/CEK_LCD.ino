#include <Wire.h>;
 
void setup(){
  Wire.begin();
  Serial.begin(9600);
  while (!Serial);
  Serial.println("\nI2C Cek LCD");
}
 
void loop(){
  byte error, address;
  int nLCD;
  Serial.println("Pencarian LCD ..");
   
  nLCD = 0;
  for(address = 1; address < 127; address++ ){
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
     
    if (error == 0){
      Serial.print("Ditemukan LCD i2C pada alamat 0x");
      if (address<16)
      Serial.print("0");
      Serial.print(address,HEX);
      Serial.println(" !");
       
      nLCD++;
    }
    else if (error==4){
      Serial.print("tidak ditemukan alamat LCD 0x");
      if (address<16)
      Serial.print("0");
      Serial.println(address,HEX);
    }
  }
  if (nLCD == 0)
    Serial.println("Tidak Ditemukan Alamat  LCD i2c\n");
    else
    Serial.println("selesai\n");
     
    delay(5000);
}
