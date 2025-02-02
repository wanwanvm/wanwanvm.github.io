---
layout: post
title: Mendaftaran Data pada blok di Kartu RFID dengan Modul RFID-RC522 menggunakan ESP32
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Mendaftaran Data pada blok di Kartu RFID dengan Modul RFID-RC522 menggunakan ESP32
comments: true
---
**Mendaftaran Data pada blok di Kartu RFID dengan Modul RFID-RC522 menggunakan ESP32*

Cara Mendaftaran Data pada blok di Kartu RFID dengan Modul RFID-RC522 menggunakan ESP32, disini saya menggunakan contoh data NISN, NAMA, dan KELAS langkah langkah nya dapat di lihat seperti disawah ini :

**Langkah-langkah yang harus dilakukan:**
**1. Peralatan yang dibutuhkan:**
* ESP32
* RFID-RC522
* Kabel jumper
* Kartu/tag RFID

**2. Rangkaian Koneksi RFID-RC522 ke ESP32**
Hubungkan modul RFID-RC522 ke ESP32 sebagai berikut:
![_koneksi]({{ site.baseurl }}/images/koneksi PIN RFID.png)

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/sensor-RFID-RC522-rev.png)

**3. Instalasi Library di Arduino IDE**
Pastikan Anda telah menginstal library berikut melalui Library Manager:
* MFRC522 untuk membaca UID RFID

**jika terdapat kegagalan pada saat proses kompilasi pada libraries MFRC522 bisa di lihat cara mengatasinya di <a href="https://wanwanvm.github.io/Mengatasi-Error-pada-Libary-Libraries-MFRC522-di-Arduino-Module-MFRC-522-RFID/">https://wanwanvm.github.io/Mengatasi-Error-pada-Libary-Libraries-MFRC522-di-Arduino-Module-MFRC-522-RFID/</a>

**4. Kode Program ESP32 di Arduino IDE**
Silahkan copy code di Arduino IDE and a

<script src="https://gist.github.com/wanwanvm/c02f1ee104d4cb72730fff7e0c89b711.js"></script>

penjelasan 
- Blok 4, 5, dan 6 digunakan untuk menyimpan NISN, Nama, dan Kelas.
- Kunci autentikasi default (0xFF) digunakan untuk mengakses blok kartu RFID.
- Program meminta input dari serial monitor dan menuliskan data tersebut ke kartu RFID.

**5. Langkah Uji Coba**
1. Hubungkan ESP32 ke komputer dan upload kode di atas.
2. Buka Serial Monitor (baud rate: 115200).
3. Tempelkan kartu RFID ke RC522.
4. Ikuti petunjuk untuk memasukkan NISN, Nama, dan Kelas di Serial Monitor Kemudian Enter Untuk Melanjutkan. 
5. Data akan ditulis ke kartu RFID.

Gambar setelah dijalankan:
![_terminal]({{ site.baseurl }}/images/terminal rfid.png)
