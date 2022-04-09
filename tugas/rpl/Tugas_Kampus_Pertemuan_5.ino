//Miswan
//Universitas Pamulang
//Magister Teknik Informatika
//NIM 211012000035

byte tombol= 13; //pendefinisian
const byte led1 = 3; // karena nilai tetap / konstan
const byte led2 = 5;
byte led3 = 8;
int nilai;
int counter = 0;

void setup(){
  // dibaca hanya satu kali //seting untuk PIN 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(tombol, INPUT);
  Serial.begin(9600);//BAUD rate kecepatan 
}

void loop()
{
  nilai= digitalRead(tombol);
  delay(250); //bouncing
  if(nilai == 0){
   counter++;
    Serial.print("Push ke = ");
    Serial.println(counter);
   
  }
  
  if(counter == 5)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if(counter == 6)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if(counter == 7)
  {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  }
 else if(counter == 8)
  {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  counter = 0;
  }
 }
