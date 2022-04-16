int i;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 for(i=1;i<11;i++)
 {
  Serial.println(i);
  delay(1000);
 }
 Serial.println();
 for(i=15;i>0;i--)
 {
  Serial.print("coba : ");
  Serial.println(i);
  delay(1000);
 }
 
}
