---
layout: post
title: Merancang Antrian parkiran dengan interupt di arduino
tags: [Arduino]
---

1.  Ketika pertama kali dijalankan di layar komputer akan tertulis “PARKIRAN KOSONG”.
3. Dalam keadaan kosong, jika tombol keluar ditekan maka system tidak bereaksi
5. Dalam keadaan kosong, jika tombol masuk ditekan satu kali, maka di layar komputer akan tertulis “Jumlah Mobil: 1” dan jika ditekan lagi maka akan tertulis “Jumlah Mobil: 2” dan jika ditekan lagi maka jumlah mobil akan bertambah  lagi. Begitu seterusnya hingga jumlahnya menjadi 10.
7. Pada penekanan yang ke 10 akan muncul tulisan “Jumlah Mobil: 10” yang disertai dengan tulisan “MAAF PARKIRAN PENUH”  yang berada di bawahnya.
9. Dalam keadaan penuh jika tombol masuk di tekan, maka system tidak bereaksi.
11. Dalam keadaan penuh jika tombol keluar ditekan 1 kali maka jumlah mobil akan berkurang 1. Begitu seterusnya hingga tempat parkir menjadi kosong lagi.

<script src="https://gist.github.com/wanwanvm/493c4dab9fca146fb60687fdbf7d580a.js"></script>


Skematik nya tediri dari :
1. ARDUINO UNO R3.
2. BUTTON
3. GROUND
4. POWER
5. VIRTUAL TERMINAL


![_where]({{ site.baseurl }}/images/img-parkir-arduino.png)
  
file project dapat di unduh di <a href="https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/antrianparkir">https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/antrianparkir</a>
Artikel berikutnya adalah Switch atau silahkan kirim masukan untuk saya ingin membuat apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
