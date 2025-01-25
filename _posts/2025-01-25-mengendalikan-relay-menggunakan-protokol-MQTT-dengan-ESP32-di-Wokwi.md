---
layout: post
title: mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi
tags: [Arduino]
fullview: false
category : Kelas Arduino
description : mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi
comments: true
---
**Mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi**

Mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi, berikut adalah langkah-langkahnya:

**Langkah 1: Konfigurasi Wokwi**
1. Buat proyek baru di Wokwi.
2. Tambahkan komponen berikut:
    * Dua ESP32 DevKit.
    * Relay.
    * LED (opsional untuk menandakan status relay).
    * Resistor (220Ω untuk LED jika digunakan).
    * Kabel koneksi.
3. Hubungkan relay ke salah satu ESP32:
    * VCC → 3.3V atau 5V pada ESP32.
    * GND → GND pada ESP32.
    * IN → GPIO (misalnya, GPIO5 pada ESP32).
4. Hubungkan LED (jika digunakan):
    * Anoda (+) → GPIO pada ESP32 (misalnya, GPIO2).
    * Katoda (-) → GND melalui resistor 220Ω.
5. ESP32 lainnya akan bertindak sebagai pengirim pesan MQTT untuk mengontrol relay

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/wokwi mqtt relay.png)

**Langkah 2: Setup MQTT Broker**
Gunakan broker MQTT publik, seperti test.mosquitto.org, atau Anda dapat menjalankan broker lokal dengan Mosquitto. Dalam tutorial ini, kita akan menggunakan test.mosquitto.org.

**Langkah 3: Kode ESP32 untuk Kontrol Relay**
Berikut adalah kode untuk ESP32 yang mengontrol relay berdasarkan pesan MQTT.

**Kode ESP32 (Relay Controller)**

<script src="https://gist.github.com/wanwanvm/87208711cfb84fd27f7bc42e82a45ab7.js"></script>
