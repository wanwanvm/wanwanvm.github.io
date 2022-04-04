//Miswan
//Universitas Pamulang
//Magister Teknik Informatika
//NIM 211012000035

byte tombol= 13;
byte led1 = 3;
byte led2 = 5;
byte led3 = 8;
int nilai;
int counter = 0;
void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(tombol, INPUT);
  Serial.begin(9600);
}

void loop()
{
  nilai= digitalRead(tombol);

  if(nilai == 0){
   // digitalWrite(led, HIGH);
    Serial.print("Push ke = ");
    Serial.println(counter);
    counter++;
    delay(1000);
   
  }
  
  if(counter == 6)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if(counter == 7)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if(counter == 8)
  {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  }
 else if(counter == 9)
  {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  counter = 0;
  }
 }
