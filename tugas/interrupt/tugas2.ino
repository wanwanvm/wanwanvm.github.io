#define LED 13
#define interrupt_0 2
#define interrupt_1 3

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(interrupt_0,INPUT);
  pinMode(interrupt_1,INPUT);

  attachInterrupt(digitalPinToInterrupt(2),led_nyala,RISING);
  attachInterrupt(digitalPinToInterrupt(3),led_mati,FALLING);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void led_nyala()
{
  digitalWrite(LED,HIGH);
  
}
void led_mati()
{
  digitalWrite(LED,LOW);
}
