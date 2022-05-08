---
layout: post
title: Cara Mudah Menggunakan LCD i2c di Arduino dan Proteus
tags: [Arduino]
---

 
Modul I2C untuk LCD 16 x 2 adalah modul yang sangat mempermudah penggunaan sebuah LCD,  dengan modul I2C juga dapat menghemat pin dari LCD ke microkontroler / Arduino karena output hanya 4 pin (VCC, GND, SCL, SDA). 

sebelum menggunkan LCD dengan Modul i2C kita harus mencari alamat dari modul tersebut yaitu dengan cara seperti berikut. 

1. Rakailah modul LCD dengan arduino sesuai skematik di bawah ini. 
Skematik nya tediri dari :
1. ARDUINO UNO R3.
2. POT ( 1 K) Aktif
3. LM016L
4. PCF8574
5. GROUND
6. POWER
7. VIRTUAL TERMINAL

![_lcdi2c]({{ site.baseurl }}/images/skematik lcd i2c.png)

2. tulislah kode di arduino untuk cek alamat lcd
<script src="https://gist.github.com/wanwanvm/0b2cedb984ca1e0d75e156b409c12b91.js"></script>

Kemudian jalankan program jika tidak menggunakan simulator proteus bisa di lihat di monitor terminal 
hasil nya seperti dibawah ini
![_lcdi2c]({{ site.baseurl }}/images/hasil cek lcd.png)

alamat LCD kita dapatkan 0x27 maka akan kita gunakan untuk alamat di setiap kode yang akan kita tulis di arduino.

3. jika sudah ketemu alamat LCD  nya bisa menggunakan LCD untuk keperluan pembuatan perangkat sesuai dengan keingan kita
untuk ujicoba saya ingin menampilkan tulisan di LCD tersebut seperti contoh :
<script src="https://gist.github.com/wanwanvm/bdca7d9901ef29bd9a950ff0b88b87df.js"></script>

kemudian jalankan maka akan menghasilkan tulisan sesuai dengan keingan kita.

![_lcdi2c]({{ site.baseurl }}/images/hasil LCD.png)

artikel terkait <a href="https://github.com/johnrickman/LiquidCrystal_I2C/blob/master/examples/HelloWorld/HelloWorld.pde">https://github.com/johnrickman/LiquidCrystal_I2C/blob/master/examples/HelloWorld/HelloWorld.pde/</a>

file project dapat di unduh di <a href="https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/LCD-I2C">https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/LCD-I2C</a>
Artikel berikutnya adalah Switch atau silahkan kirim masukan untuk saya ingin membuat apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
