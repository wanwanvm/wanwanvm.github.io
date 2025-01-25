---
layout: post
title: Menampilkan Data Sensor DHT 22 dengan blynk dengan Arduino ESP32
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Menampilkan Data Sensor DHT 22 dengan blynk dengan Arduino ESP32
comments: true
---
**Menampilkan Data Sensor DHT 22 dengan blynk dengan Arduino ESP32*

Menghubungkan sensor DHT22 ke ESP32 dan memonitor data melalui Blynk menggunakan Wokwi, berikut adalah langkah-langkah lengkapnya:

**Langkah 1: Persiapan Wokwi**
1. Buat Proyek di Wokwi:
    * Buka Wokwi dan buat proyek baru.
    * Tambahkan komponen:
        * ESP32 DevKit
        * DHT22 Sensor
        * Resistor (10kΩ) untuk pull-up pada pin data sensor DHT22.
    * Hubungkan:
        * VCC DHT22 → 3.3V ESP32.
        * GND DHT22 → GND ESP32.
        * DATA DHT22 → Pin GPIO (misalnya GPIO4).

**Langkah 2: Buat Akun Blynk**
1. Daftar di Blynk:
    * Buka Blynk dan daftar akun.
2. Buat Proyek Baru:
    * Pilih perangkat: ESP32.
    * Pilih koneksi: Wi-Fi.
    * Salin Auth Token dari proyek (dikirimkan ke email Anda).


lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/Wokwi BLYNK.png)

**Langkah 3: Kode ESP32**

Kode ini membaca data dari DHT22 dan mengirimkan suhu dan kelembapan ke aplikasi Blynk.
Kode ESP32

<script src="https://gist.github.com/wanwanvm/6d841de57892f4cadeae57c0877f7fd0.js"></script>


**Langkah 4: Konfigurasi Widget di Blynk**

1. Buka Aplikasi Blynk di ponsel Anda.
2. Tambahkan widget:
    * Gauge untuk suhu:
        * Hubungkan ke Virtual Pin V0.
    * Gauge untuk kelembapan:
        * Hubungkan ke Virtual Pin V1.
3. Atur label, warna, dan unit (misalnya °C untuk suhu dan % untuk kelembapan).

**Langkah 5: Uji Coba di Wokwi**
1. Upload kode ke ESP32 di Wokwi.
2. Pastikan Wi-Fi dan Blynk Auth Token sudah benar.
3. Buka aplikasi Blynk dan periksa widget untuk melihat pembacaan suhu dan kelembapan.
