---
layout: post
title: penggunaan FOR Arduino dengan Proteus
tags: [Arduino]
---
A. Pengulangan FOR untuk menjalankan led dengan perintah 1 detik ( delay 1000) sebanyak nilai ulangan sebanyak nilai ulangan nya. 

Komponen Libary yang di butuhkan di proteus adalah :
1. ARDUINO UNO R3
2. LED

Langkah Program : 

Int i ; ---> Mendefinisikan variable i sebagai integer
Int LED1 = 9; ---> Mendefinisikan variable LED1 sebagai integer dengan nilai 9
pinMode (LEDku, OUTPUT); ---> seting pin LED1 (pin No. 9) sebagai output
digitalWrite (LED1, HIGH); ---> memerintahkan pin LED1 bernilai 1 (tegangan 5 V)
digitalWrite (LED1, LOW); ---> memerintahkan pin LED1 bernilai 0 (tidak ada tegangan)
Serial.begin(9600); ---> mengaktifkan port serial (pin 0 dan pin 1) dengan BAUD rate 9.600
Serial.println(i); ---> mencetak nilai i sekaligus ganti baris
Serial.println(); ---> tdk ada yg dicetak, hanya ganti baris
Serial.print("coba "); ---> mencetak kata "coba" tanpa ganti baris (kata yang dicetak ada diantara 2 tanda petik)
delay(1000); ---> tunda selama 1.000 m detik = 1 detik

<script src="https://gist.github.com/wanwanvm/c0c0e26ab8eaddf7a21b86f6298399e9.js"></script>

dengan skematik rangkaian pada proteus sebagai berikut : 

![_for]({{ site.baseurl }}/images/for1.png)

file project dapat di unduh di <a href="https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/for">https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/for</a>

B. Pengulangan FOR untuk di tampilkan di Virtual Terminal

Komponen Libary yang di butuhkan di proteus adalah :
1. ARDUINO UNO R3
2. VIRTUAL TERMINAL

<script src="https://gist.github.com/wanwanvm/c5ced552ca5fd817c19638e8ff1024ed.js"></script>

dengan skematik rangkaian pada proteus sebagai berikut : 


![_for2]({{ site.baseurl }}/images/for2.png)
  
file project dapat di unduh di <a href="https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/for2">https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/for</a>
silahkan kirim masukan untuk saya ingin membuat artikel apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
