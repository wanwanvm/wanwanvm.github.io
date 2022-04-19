int A,B;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
Penjumlahan(4,8);
Serial.println(A);
Serial.println();
delay(1000);
Perkalian(7,10);
Serial.println(B);
Serial.println();
delay(1000);  
}

void Penjumlahan(int x,int y)
{
  A = x + y;
}
void Perkalian(int x, int y)
{
  B = x*y;
}
