---
layout: post
title: Mengirimkan UID dari RFID-RC522 dengan ESP32 ke Google Sheet
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Mengirimkan UID dari RFID-RC522 dengan ESP32 ke Google Sheet
comments: true
---
**Mengirimkan UID dari RFID-RC522 dengan ESP32 ke Google Sheet*

Mengirimkan UID dari RFID-RC522 dengan ESP32 ke Google Sheet memerlukan beberapa langkah, termasuk membaca UID kartu RFID, menghubungkan ESP32 ke Wi-Fi, mengirimkan data ke Google Sheets melalui Google Apps Script, dan menampilkan hasilnya di spreadsheet.

**Langkah-langkah yang harus dilakukan:**
**1. Peralatan yang dibutuhkan:**
* ESP32
* RFID-RC522
* Kabel jumper
* Kartu/tag RFID

**2. Rangkaian Koneksi RFID-RC522 ke ESP32**
Hubungkan modul RFID-RC522 ke ESP32 sebagai berikut:

RFID-RC522 |	ESP32
-----------------
SDA (SS)---->GPIO 5

SCK	----> GPIO 18

MOSI---->GPIO 23

MISO---->GPIO 19

GND---->GND

RST---->GPIO 22

3.3V---->3.3V

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/sensor-RFID-RC522-rev.png)

**3. Instalasi Library di Arduino IDE**
Pastikan Anda telah menginstal library berikut melalui Library Manager:
* MFRC522 untuk membaca UID RFID
* WiFiClientSecure untuk koneksi HTTPS
* HTTPClient untuk mengirim data ke Google Sheets

**jika terdapat kegagalan pada saat proses kompilasi pada libraries MFRC522 bisa di lihat cara mengatasinya di https://wanwanvm.github.io/Mengatasi-Error-pada-Libary-Libraries-MFRC522-di-Arduino-Module-MFRC-522-RFID/

**4. Buat Google Apps Script untuk menerima data**
1. Buka Google Sheets dan buat dokumen baru dengan dua kolom

Contoh berisi data 
![_sheet]({{ site.baseurl }}/images/Contoh Sheet RFID.png)
2. Klik Extensions > Apps Script.
3. Hapus kode default dan masukkan kode berikut:
![_appscript]({{ site.baseurl }}/images/Appscript rfid.png)
copykan script dibawah ini
<script src="https://gist.github.com/wanwanvm/8441d08b73624f289e28df39c7c6b6fc.js"></script>

**5. Jalankan dan Deploy:**

    - Klik Deploy > New Deployment.
    - Pilih Web App.
    - Set Anyone dapat mengakses.
    - Salin URL Web App.

**6. Kode Program ESP32 di Arduino IDE**
Setelah mendapatkan URL Google Apps Script, gunakan kode berikut di ESP32:

<script src="https://gist.github.com/wanwanvm/73de2300ba6ea39f0880c3411bdec428.js"></script>

**7. Cara Kerja Kode**
1. ESP32 membaca UID kartu/tag RFID menggunakan library MFRC522.
2. Menghubungkan ESP32 ke Wi-Fi menggunakan library WiFi.h.
3. Mengirimkan UID ke Google Sheets dengan membuat permintaan HTTP GET ke Google Apps Script.
4. Data akan otomatis masuk ke spreadsheet dengan timestamp.
