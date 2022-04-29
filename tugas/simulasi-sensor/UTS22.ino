//Miswan
//Universitas Pamulang
//Magister Teknik Informatika
//NIM 211012000035 / S2
//UTS REKAYASA PERANGKAT LUNAK 
//SOAL NOMOR 2 Rancangan simulasi pembacaan sensor

const int sensor1 = A0;
int led1=10;
int led2 = 11;
int led3 = 12;
int output=0;
int counter1 = 0;
int counter2 = 0;
int counter3 = 0;
int counter4 = 0;
int counter5 = 0;
int counter6 = 0;
int counter7 = 0;
int counter8 = 0;
int counter9 = 0;
int counter10 = 0;



//int nilaiPotensio = 0;
int nilai;

void setup() {
  pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
 
  Serial.begin(9600);
  Serial.setTimeout(10);
  //tayang();
  delay(100);
}

void loop()
{

  nilai= analogRead(sensor1);
  delay(250);
  output= map(nilai, 90, 1023, 0, 10);
 
 if(output == 0)
 {
  digitalWrite(led2,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led3,LOW);
 }
 if(output == 1)
  {
 counter1 ++;
   // output = 0;
   if(counter1==1)
   {
   digitalWrite(led2,LOW);
  digitalWrite(led1,HIGH);
//  digitalWrite(led3,LOW);
  Serial.print("Angka = ");
  Serial.println(output);
 
   counter2=0;
   counter3=0;
   counter4=0;
   counter5=0;
   counter6=0;
   counter7=0;
   counter8=0;
   counter9=0;
   counter10=0;
   }

  }
  
  
  else if(output == 2)
  {
    counter2 ++;
    if(counter2 == 1)
    {
  //    digitalWrite(led2,LOW);
 //  digitalWrite(led1,HIGH);
  // digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   
   counter3=0;
   counter4=0;
   counter5=0;
   counter6=0;
   counter7=0;
   counter8=0;
   counter9=0;
   counter10=0;
    }
  }
  
  else if(output == 3)
  {
    counter3 ++;
    if(counter3 == 1)
    {
    //  digitalWrite(led2,LOW);
   // digitalWrite(led1,HIGH);
  //  digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   counter2=0;

   counter4=0;
   counter5=0;
   counter6=0;
   counter7=0;
   counter8=0;
   counter9=0;
   counter10=0;
    }
  }
  else if(output == 4)
  {
    counter4 ++;
    if(counter4 == 1)
    {
    //   digitalWrite(led2,LOW);
    //digitalWrite(led1,HIGH);
   // digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   counter2=0;
   counter3=0;

   counter5=0;
   counter6=0;
   counter7=0;
   counter8=0;
   counter9=0;
   counter10=0;
    }
  }
  else if(output == 5)
  {
    counter5 ++;
    if(counter5 == 1)
    {
   digitalWrite(led1,LOW);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
    counter1=0;
   counter2=0;
   counter3=0;
   counter4=0;
  
   counter6=0;
   counter7=0;
   counter8=0;
   counter9=0;
   counter10=0;
    }
  }
  else if(output == 6)
  {
    counter6 ++;
    if(counter6 == 1)
    {
// digitalWrite(led2,HIGH);
// digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   counter2=0;
   counter3=0;
   counter4=0;
   counter5=0;
   
   counter7=0;
   counter8=0;
   counter9=0;
   counter10=0;
    }
  }
   else if(output == 7)
  {
    counter7 ++;
    if(counter7 == 1)
    {
// digitalWrite(led2,HIGH);
 //digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   counter2=0;
   counter3=0;
   counter4=0;
   counter5=0;
   counter6=0;
   
   counter8=0;
   counter9=0;
   counter10=0;
    }
  }

   else if(output == 8)
  {
    counter8 ++;
    if(counter8 == 1)
    {
     //  digitalWrite(led2,HIGH);
      // digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   counter2=0;
   counter3=0;
   counter4=0;
   counter5=0;
   counter6=0;
   counter7=0;
  
   counter9=0;
   counter10=0;
    }
  }
 else if(output == 9)
  {
    counter9 ++;
    if(counter9 == 1)
    {
     //  digitalWrite(led2,HIGH);
      // digitalWrite(led3,LOW);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   counter2=0;
   counter3=0;
   counter4=0;
   counter5=0;
   counter6=0;
   counter7=0;
   counter8=0;
   
   counter10=0;
    }
  }
   else if(output == 10)
  {
    counter10 ++;
    if(counter10 == 1)
    {
   digitalWrite(led2,LOW);
   digitalWrite(led3,HIGH);
   Serial.print("Angka = ");
   Serial.println(output);
   counter1=0;
   counter2=0;
   counter3=0;
   counter4=0;
   counter5=0;
   counter6=0;
   counter7=0;
   counter8=0;
   counter9=0;
    }
  }
     
}
