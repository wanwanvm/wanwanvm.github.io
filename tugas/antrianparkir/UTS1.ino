//Miswan
//Universitas Pamulang
//Magister Teknik Informatika
//NIM 211012000035 / S2
//UTS REKAYASA PERANGKAT LUNAK 
//SOAL NOMOR 1 Rancangan simulasi tempat parkir kendaraan

#define interrupt_0 2
#define interrupt_1 3
int mobil;
int mobil_keluar;
int mobil_masuk=0;
void setup() {
  // put your setup code here, to run once:

  pinMode(interrupt_0,INPUT);
  pinMode(interrupt_1,INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(3),parkir_masuk,RISING);
  attachInterrupt(digitalPinToInterrupt(2),parkir_keluar,FALLING);
Serial.println("PARKIRAN KOSONG");
}

void loop() {
  // put your main code here, to run repeatedly:
//led_nyala();
}

void parkir_masuk()
{
  if(mobil_masuk<10)
  {
    mobil_masuk++;
    if(mobil_masuk<=9)
    {
  //digitalWrite(LED,HIGH);
  
   
  Serial.print("Jumlah Mobil : ");
   Serial.println(mobil_masuk);
    }
     else if(mobil_masuk==10)
  {
     Serial.print("Jumlah Mobil : ");
   Serial.println(mobil_masuk);
 
    Serial.println("MAAF PARKIRAN PENUH");
  }

  }
 }
void parkir_keluar()
{

if(mobil_masuk>0)
{
   mobil_masuk--;
  if(mobil_masuk>0)
  {

  Serial.print("Jumlah Mobil : ");
   Serial.println(mobil_masuk);
  }
  else if(mobil_masuk==0)
  {
 
    Serial.println("PARKIRAN KOSONG");
  }
}

}
