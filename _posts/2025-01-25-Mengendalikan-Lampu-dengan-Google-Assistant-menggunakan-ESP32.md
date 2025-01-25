---
layout: post
title: Mengendalikan Lampu dengan Google Assistant menggunakan ESP32
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Mengendalikan Lampu dengan Google Assistant menggunakan ESP32
comments: true
---
**Mengendalikan Lampu dengan Google Assistant menggunakan ESP32*

Berikut adalah panduan lengkap untuk menghubungkan ESP32, IFTTT, Adafruit IO, dan Google Assistant untuk mengontrol lampu (atau relay)

**Arsitektur Sistem**
1. Google Assistant: Memberikan perintah suara.
2. IFTTT: Menghubungkan Google Assistant dengan Adafruit IO.
3. Adafruit IO: Berfungsi sebagai platform cloud untuk menerima perintah dari IFTTT.
4. ESP32: Mengontrol lampu atau relay berdasarkan data dari Adafruit IO.

**Langkah 1: Buat Akun**
* Adafruit IO: Daftar di Adafruit IO.
* IFTTT: Daftar di IFTTT.

**Langkah 2: Setup Adafruit IO**
1. Buat Feed:
    * Masuk ke Adafruit IO Dashboard.
    * Klik Feeds > Actions > Create a New Feed.
    * Beri nama feed, misalnya lampu.
2. Buat Dashboard (opsional untuk monitoring):
    * Klik Dashboard > Create a New Dashboard.
    * Tambahkan widget untuk memantau feed lampu.

**Langkah 3: Setup IFTTT**
1. Hubungkan Google Assistant dengan Adafruit IO:
    * Buka IFTTT dan klik Create.
    * Pilih If This dan pilih Google Assistant:
        * Atur Say a phrase with a text ingredient.
        * Masukkan frase seperti: Turn the lamp {state}.
        * Parameter {state} digunakan untuk "ON" atau "OFF".
    * Pilih Then That dan pilih Adafruit:
        * Pilih Send Data to Adafruit IO.
        * Hubungkan ke feed lampu.
        * Kirim nilai ON atau OFF.
2. Simpan Applet.


**Kode ESP32**

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/wokwi google asistent.png)

**Langkah 4: Kode ESP32**
Kode ini akan membaca data dari Adafruit IO dan mengontrol relay.

<script src="https://gist.github.com/wanwanvm/ba39d779fff0c08b32ddf9e693994813.js"></script>


**Langkah 5: Uji Coba**

1. Hubungkan ESP32 ke WiFi:
    * Upload kode ke ESP32.
    * Pantau Serial Monitor untuk memastikan ESP32 terhubung ke Adafruit IO.
2. Gunakan Google Assistant:
    * Katakan: Turn the lamp ON atau Turn the lamp OFF.
    * IFTTT akan mengirimkan data ke feed lampu di Adafruit IO.
3. Periksa Relay:
    * Relay akan aktif/mati sesuai dengan perintah suara Anda.
