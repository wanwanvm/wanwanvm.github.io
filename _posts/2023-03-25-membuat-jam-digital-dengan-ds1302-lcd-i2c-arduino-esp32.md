---
layout: post
title: Membuat Jam Digital dengan Arduino ESP32, RTC DS1302 dan LCD i2C
tags: [Arduino]
fullview: false
category : Arduino
description : Membuat Jam Digital dengan Arduino ESP32, RTC DS1302 dan LCD i2C
comments: true
---
**Membuat Jam Digital dengan Arduino ESP32, RTC DS1302 dan LCD i2C**
Kita akan membuat Jam Digital menggunakan Arduino ESP32 sebagai Controllernya, RTC DS1302 sebagai data untuk waktu dan tanggalnya, dan LCD i2C untuk menampilkan data waktu dan tanggalnya :

![_Gambar]({{ site.baseurl }}/images/Jam Digital RTC Ds1302.jpeg)
ini merupakan Pengembangan dari pembahasanan sebelumnya
<a href="https://wanwanvm.github.io/lcd-pada-arduino-esp32/">LCD 16 x 2 I2C dengan Arduino ESP32</a>

Apa yang harus disiapkan sebelum membuat jam digital
1. Arduino ESP32
2. LCD i2C [16 x 2]
3. RTC DS1302
4. Kabel Jumper

**Rangkailah pengkabelan sesuai wiring dibawah ini**

Modul RTC DS1302      Arduino ESP32
VCC ------------------> 3v3
GND ------------------> GND
CLK ------------------> D5
DATA -----------------> D4
RST ------------------> D2

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/JAM dengan LCD_bb.png)


Sebelum masuk ke-pemrograman ada 2 library yang harus kamu masukan ke Arduino. Library lCD i2C dan Library untuk RTCnya, silahkan Download dulu lewat Link di bawah ini:
1. <a href="https://www.dropbox.com/s/abagili6xb7xutj/virtuabotixRTC.zip?dl=0">libary virtuabotixRTC.zip </a>
2. <a href="https://www.dropbox.com/s/htqzmo3zdkx57az/NewliquidCrystal_1.3.4.zip?dl=0">libary NewliquidCrystal_1.3.4.zip</a>

Jika library sudah dimasukan dilanjutkan dengan pemrograman. Silahkan kamu copy paste atau ketik ulang sketch dibawah ini:
<script src="https://gist.github.com/wanwanvm/c05b97d85a1b939e93a18e7369908fd9.js"></script>

**link terkait**
Silahkan mencoba jika ada pertanyaan bisa hubungi saya di sosial media atau pun kirim email : 
<a href="https://kelasrobot.com/membuat-jam-digital-dengan-arduino-uno-rtc-ds1302-dan-lcd-i2c/">https://kelasrobot.com/membuat-jam-digital-dengan-arduino-uno-rtc-ds1302-dan-lcd-i2c/</a>




