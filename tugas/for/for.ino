int i;
int LED1=9;
int ulangan = 6;

void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);
  for(i=1;i<ulangan;i++)
  {delay(1000);}
  digitalWrite(LED1,LOW);
  for(i=ulangan;i>0;i--)
  {delay(1000);}
  // put your main code here, to run repeatedly:

}
