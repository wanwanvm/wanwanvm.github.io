//Miswan
//Universitas Pamulang
//Magister Teknik Informatika
//NIM 211012000035
//UTS REKAYASA PERANGKAT LUNAK
//SOAL NO 3 Rancangan simulasi kalkulator sederhana

int tombol= 12; 
int tombol2= 11;
int tombol3= 10;

int hasil;
int nilai;
int counter = 0;
int nilai2;
int counter2 = 0;
int nilai3;
int nilai4;
int counter4 = 0;


void setup(){
  // dibaca hanya satu kali //seting untuk PIN 
  
  pinMode(tombol, INPUT_PULLUP);
  pinMode(tombol2, INPUT_PULLUP);
  pinMode(tombol3, INPUT_PULLUP);
  Serial.begin(9600);//BAUD rate kecepatan 
}

void loop()
{
 
nilai= digitalRead(tombol);

  if(nilai == 0 && counter2<1){
      
   counter++;
  //  Serial.print("Push ke = ");
    Serial.println(counter);
   
  }

   nilai2= digitalRead(tombol2);
   
 //   delay(250); //bouncing
  
  if(nilai2 == 0&& counter>0){
   counter2++;
   if(counter2==1)
   { 
    Serial.println("+");
   }
  }

  nilai4 = digitalRead(tombol);
   
  if(nilai4 == 0 && counter2>0)
  {
      counter4++;
  //  Serial.print("Push ke = ");
    Serial.println(counter4);
  }

nilai3= digitalRead(tombol3);
 
  if(nilai3 == 0 && counter4>0)
  {
     Penjumlahan(counter,counter4);
     Serial.print(counter);
     Serial.print("+");
     Serial.print(counter4);
     Serial.print("=");
     Serial.println(hasil);
     counter = 0;
     counter4 = 0;
     counter2 = 0;
  }
   delay(250); //bouncing

 }

 void Penjumlahan(int counter,int counter4)
{
  hasil = counter + counter4;
}
