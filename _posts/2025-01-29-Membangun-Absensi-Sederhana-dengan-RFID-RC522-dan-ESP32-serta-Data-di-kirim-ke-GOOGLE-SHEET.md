---
layout: post
title: Membangun Absensi Sederhana dengan RFID-RC522 dan ESP32 serta Data di kirim ke GOOGLE SHEET
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Membangun Absensi Sederhana dengan RFID-RC522 dan ESP32 serta Data di kirim ke GOOGLE SHEET
comments: true
---
**Membangun Absensi Sederhana dengan RFID-RC522 dan ESP32 serta Data di kirim ke GOOGLE SHEET**

Cara Membangun Absensi Sederhana dengan RFID-RC522 dan ESP32 serta Data di kirim ke GOOGLE SHEET contoh data tanggal, waktu, NISN, NAMA, dan KELAS dari data yang sudah di rekam ke KARTU RFID pada pembahasan sezelumnnya yang dapat di lihat di link ini <a href="https://wanwanvm.github.io/Mendaftaran-Data-pada-blok-di-Kartu-RFID-dengan-Modul-RFID-RC522-menggunakan-ESP32/">https://wanwanvm.github.io/Mendaftaran-Data-pada-blok-di-Kartu-RFID-dengan-Modul-RFID-RC522-menggunakan-ESP32/</a>
Langkah langkah pembuatnya  nya dapat di lihat seperti disawah ini :

**Langkah-langkah yang harus dilakukan:**
**1. Bahan & Peralatan**
**A. Perangkat Keras**
1. ESP32 Dev Board (misalnya ESP32 DEVKITV1)
2. Modul RFID RC522
3. Kartu atau Tag RFID (13.56 MHz)
4. Kabel Jumper
5. Komputer/Laptop dengan Arduino IDE

**B. Perangkat Lunak & Akun**
1. Arduino IDE dengan library:
    * WiFi.h (bawaan ESP32)
    * HTTPClient.h (untuk HTTP request)
    * MFRC522.h (untuk membaca RFID)
2. Google Sheets untuk menyimpan data
3. Google Apps Script sebagai API penerima data

**2. Rangkaian Koneksi RFID-RC522 ke ESP32**
Hubungkan modul RFID-RC522 ke ESP32 sebagai berikut:

![_koneksi]({{ site.baseurl }}/images/koneksi PIN RFID.png)

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :

![_wiring]({{ site.baseurl }}/images/sensor-RFID-RC522-rev.png)

![_wiring]({{ site.baseurl }}/images/ESP32-RFIDRC522.JPG)


**3. Persiapan Google Sheets & Google Apps Script**
**A. Buat Google Sheet**
1. Buka Google Sheets
2. Buat file baru dan beri nama "Data RFID"
3. Salin ID Spreadsheet dari URL

**B. Buat Google Apps Script**
1. Klik Extensions → Apps Script
2. Hapus kode default dan ganti dengan berikut:
<script src="https://gist.github.com/wanwanvm/1343b783e40745af2df71410a6fe7b7e.js"></script>

Gambar Kolom Pada Google Sheet:
![_terminal]({{ site.baseurl }}/images/GOOGLE SHEET KARTU RFID.png)

Ganti "SPREADSHEET_ID" dengan ID Spreadsheet dari langkah sebelumnya.
- Klik Deploy → New Deployment
- Pilih Web App, atur akses ke Anyone
- Klik Deploy dan salin URL API yang diberikan.

**4. Kode ESP32 untuk Membaca RFID & Mengirim ke Google Sheets**
Copy kode berikut ke Arduino IDE dan sesuaikan SSID, password WiFi, serta URL Google Apps Script:

<script src="https://gist.github.com/wanwanvm/9ef1b96e84646828f71ef8962c531949.js"></script>

**5. Langkah Uji Coba**
1. Sambungkan ESP32 & RFID RC522 sesuai rangkaian
2. Upload kode ke ESP32 menggunakan Arduino IDE
3. Buka Serial Monitor (115200 baud)
4. Tempelkan kartu/tag RFID ke RC522


Gambar setelah dijalankan:
![_terminal]({{ site.baseurl }}/images/TERMINAL PENGIRIMAN RFID.png)

**jika terdapat kegagalan pada saat proses kompilasi pada libraries MFRC522 bisa di lihat cara mengatasinya di <a href="https://wanwanvm.github.io/Mengatasi-Error-pada-Libary-Libraries-MFRC522-di-Arduino-Module-MFRC-522-RFID/“>https://wanwanvm.github.io/Mengatasi-Error-pada-Libary-Libraries-MFRC522-di-Arduino-Module-MFRC-522-RFID/</a>

