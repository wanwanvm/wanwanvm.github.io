---
layout: post
title: Mengirimkan Data DHT22 dan Mencatat di Google Sheet dengan Arduino ESP32 Menggunakan Wokwi
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Mengirimkan Data DHT22 dan Mencatat di Google Sheet dengan Arduino ESP32 Menggunakan Wokwi 
comments: true
---
**Mengirimkan Data DHT22 dan Mencatat di Google Sheet dengan Arduino ESP32 Menggunakan Wokwi**

menghubungkan sensor DHT22 ke ESP32 dan mencatat data ke Google Sheets menggunakan Wokwi (simulator perangkat keras virtual):

**Langkah 1: Membuat Simulasi di Wokwi**
1. Buat Proyek Baru di Wokwi.
2. Tambahkan komponen berikut:
    * ESP32 DevKit.
    * Sensor DHT11/22.
    * Kabel dan resistor (opsional di simulasi).
3. Hubungkan DHT11 ke ESP32:
    * VCC → 3.3V atau 5V pada ESP32.
    * GND → Ground (GND) pada ESP32.
    * DATA → Pin GPIO pada ESP32 (contoh: GPIO4).

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/Wokwi ESP32 google sheet.png)

**Langkah 2: Kode untuk ESP32**
Gunakan kode berikut di Arduino IDE untuk membaca data dari DHT22 dan mengirimkannya ke Google Sheets menggunakan webhook:
<script src="https://gist.github.com/wanwanvm/14daf09255d9b2e966d4965aaa3c5373.js"></script>

**Langkah 3: Membuat Google Apps Script**
1. Buka Google Sheets dan buat spreadsheet baru.
2. Klik Ekstensi > Apps Script, lalu salin dan tempel kode berikut:

<script src="https://gist.github.com/wanwanvm/84a96c5fe1fcce4e0cf55fe15c9b4546.js"></script>

Simpan dan deploy skrip:
* Klik Deploy > New Deployment.
* Pilih Web app.
* Atur akses ke "Anyone".
* Salin URL yang dihasilkan.
Ganti URL-Web-App-Anda di kode ESP32 dengan URL yang Anda salin.
