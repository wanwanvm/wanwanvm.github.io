---
layout: post
title: Contoh Penggunaan Modul Max6675 untuk mengukur suhu thermocouple pada arduino proteus
tags: [Arduino]
---
Komponen Libary yang di butuhkan di proteus adalah :
1. ARDUINO UNO R3
2. VIRTUAL TERMINAL
3. MAX6675
4. TCK
 
Penggunaan Modul Max6675 (Thermocouple tipe k ) untuk penerapan memonitong suhu alat tersebut digunakan untuk mengetahui cold and hot juncion compensation, modul Max6675 mampu mengkonversi tegangan menjadi digital ( ADC ) sebesar 12 bit, dengan adanya library max6675.h kota tidak perlu lagi repot untuk memikirkan komunikasi dan konversinya.

<script src="https://gist.github.com/wanwanvm/7ca59eef74eeaaf42f5653557c729635.js"></script>

dengan skematik rangkaian pada proteus sebagai berikut

![_where]({{ site.baseurl }}/images/max6675.png)
  
file project dapat di unduh di <a href="https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/max6675">https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/max6675</a>

silahkan kirim masukan untuk saya ingin membuat artikel apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm

Artikel Modul max6675 yang terkait <a href="http://prosiding.bkstm.org/prosiding/2019/PTM01.pdf">http://prosiding.bkstm.org/prosiding/2019/PTM01.pdf</a>
