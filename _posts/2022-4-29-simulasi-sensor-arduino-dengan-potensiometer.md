---
layout: post
title: Simulasi Pembacaan Sensor potensiometer di arduino
tags: [Arduino]
---

 
  1. Data yang tampil berupa tulisan “Angka = 1” atau “Angka = 2” atau “Angka = 3” dan seterusnya hingga “Angka = 10”.
  2. Data ditampilkan hanya 1 kali dalam nilai Angka yang sama.
  3. Tampilan baru hanya akan muncul ketika terjadi perubahan nilai Angka.
  4. Pada saat nilai Angka = 0, LED1 akan menyala dan LED yang lain mati. Keadaan ini akan bertahan hingga nilai Angka = 5.
  5. Pada saat nilai Angka = 5, LED2 akan menyala dan LED yang lain mati. Keadaan ini akan bertahan hingga nilai Angka = 10 atau nilai Angka = 0.
  6. Pada saat nilai Angka = 10, LED3 akan menyala dan LED yang lain mati. Keadaan ini akan bertahan hingga nilai Angka = 5.



<script src="https://gist.github.com/wanwanvm/534fc554c0b422682ed0f8c3670e33c1.js"></script>


Skematik nya tediri dari :
1. ARDUINO UNO R3.
2. BUTTON
3. POT ( 100 K) Aktif
4. LED-GREEN
5. LED-YELLOW
6. LED-RED
7. RESISTOR (10 K)
8. GROUND
9. POWER
10. VIRTUAL TERMINAL


![_where]({{ site.baseurl }}/images/img-simulasi-sensor-arduino.png)
  
file project dapat di unduh di <a href="https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/simulasi-sensor">https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/simulasi-sensor</a>
Artikel berikutnya adalah Switch atau silahkan kirim masukan untuk saya ingin membuat apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
