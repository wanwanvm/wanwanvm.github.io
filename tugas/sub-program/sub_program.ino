const int led =5;

void setup() {
 pinMode(led, OUTPUT);

}

void loop() {

  led_nyala();
  delay(1000);
  led_mati();
  delay(1000);
  }

 void led_nyala()
 {
  digitalWrite(led, HIGH);
 }

 void led_mati()
 {
  digitalWrite(led, LOW);
 }
