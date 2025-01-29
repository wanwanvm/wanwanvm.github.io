---
layout: post
title: Mengatasi Error pada Libary Libraries MFRC522 di Arduino Module MFRC-522 RFID
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Mengatasi Error pada Libary Libraries MFRC522 di Arduino Module MFRC-522 RFID
comments: true
---
**Mengatasi Error pada Libary Libraries MFRC522 di Arduino Module MFRC-522 RFID **

**Librari MRFC522 kadang tidak terbaca dan mengalami error pada IDE Arduino versi 2.1 keatas. Seperti error di bawah ini**

<script src="https://gist.github.com/wanwanvm/48345d98a4c78f4184586fa781907cd0.js"></script>

**Kesalahan ini muncul karena Anda membandingkan pointer (backLen) dengan nilai integer, yang merupakan operasi tidak valid dalam C++. Berikut adalah langkah-langkah untuk memperbaiki masalah ini: **

**Carta Mengatasi Error pada Libary Libraries MFRC522 di Arduino Module MFRC-522 RFID**

Solusi
1. Edit File Library:
- Buka file MFRC522Extended.cpp yang ada di path berikut:
- /Users/macbook/Documents/Arduino/libraries/MFRC522/src/MFRC522Extended.cpp

1. Modifikasi Baris Kode:
- Temukan baris yang berisi:

**if (backData && (backLen > 0)) {**

Dan 

**if (backData && (backLen > 0)) {**

- Ganti baris tersebut dengan kode berikut:

**if (backData && backLen && (*backLen > 0)) {**

Penjelasan Perubahan:
* backLen adalah pointer, sehingga Anda perlu memastikan bahwa:
    * Pointer backLen tidak nullptr.
    * Nilai yang ditunjuk oleh pointer backLen lebih besar dari 0.
* Oleh karena itu, Anda harus menambahkan kondisi untuk memeriksa validitas pointer sebelum mengakses nilainya menggunakan dereferensiasi (*backLen).

Simpan File:
* Simpan perubahan pada file MFRC522Extended.cpp.

Kompilasi Ulang Sketch:
* Buka kembali Arduino IDE.
* Kompilasi ulang kode Anda untuk memastikan bahwa masalah telah teratasi.
