---
layout: post
title: Membuat kalkulator penjumlahan dengan arduino
tags: [Arduino]
---


 
  1. Pada saat program dihidupkan, maka hanya tombol 1 yang aktif.
  2. Setelah tombol 1 menghasilkan angka variable pertama yang ditampilkan pada layar komputer maka tombol 2 (penjumlah) aktif, sedangkan tombol yang lain tidak aktif
  3. Setelah tombol 2 ditekan 1 kali untuk menjumlah maka hanya tombol 1 yang aktif, sedangkan tombol yang lain tidak aktif. Tombol 2 hanya aktif 1 kali. Pada layar akan tertulis tanda “+”
  4. Karena  tombol  1 sudah aktif Kembali, maka tombol 1 dapat  digunakan  untuk menghasilkan angka variable ke 2.
  5. Setelah   variable  ke  2  dihasilkan  maka  tombol   3  dapat   aktif  untuk  menampilkan   hasil penjumlahan variable 1 + variable 2. Pada layar akan tertulis nilai variable 1 ditambah nilai variable 2 dan hasil penjumlahan kedua variable tersebut.

<script src="https://gist.github.com/wanwanvm/b26055c1d6f0f33e343dd0704aa6f606.js"></script>

Skematik nya tediri dari :
1. ARDUINO UNO R3.
2. BUTTON
9. VIRTUAL TERMINAL


![_where]({{ site.baseurl }}/images/kalkulator-sederhana.png)
  
file project dapat di unduh di <a href="https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/rpl">https://github.com/wanwanvm/wanwanvm.github.io/tree/main/tugas/rpl</a>
Artikel berikutnya adalah Switch atau silahkan kirim masukan untuk saya ingin membuat apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
