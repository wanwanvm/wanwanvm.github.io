int Pembalik =5;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  while(Pembalik>1)
  {
  Serial.println(Pembalik);
  delay(1000);
  Pembalik--;
  }
 
 while(Pembalik<5){
   // Serial.println("tunggu....!!!!");
    Serial.println(Pembalik);
    delay(2000);
    Pembalik++;
    
  }
 
  
  // put your main code here, to run repeatedly:

}
