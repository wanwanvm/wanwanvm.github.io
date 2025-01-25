---
layout: post
title: mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi dengan MQTT Panel
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi
comments: true
---
**Mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi**

Mengendalikan relay menggunakan protokol MQTT dengan ESP32 di Wokwi, berikut adalah langkah-langkahnya:

**Langkah 1: Instal Aplikasi IoT MQTT Panel untuk IOS dan IoT MQTT Dashboard pada Android**

Unduh dan instal aplikasi IoT MQTT Panel dari App Store di perangkat iOS Anda. atau
Unduh dan instal aplikasi IoT MQTT Dashboard dari Store di perangkat Android Anda.

Aplikasi ini akan digunakan untuk mengirim dan menerima pesan MQTT untuk mengontrol relay.

**Langkah 2: Konfigurasi Wokwi**
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

**Langkah 3: Setup MQTT Broker**
Gunakan broker MQTT publik, seperti test.mosquitto.org, atau Anda dapat menjalankan broker lokal dengan Mosquitto. Dalam tutorial ini, kita akan menggunakan test.mosquitto.org.

**Langkah 4: Kode ESP32 untuk Kontrol Relay**
Berikut adalah kode untuk ESP32 yang mengontrol relay berdasarkan pesan MQTT.

**Kode ESP32 (Relay Controller)**

<script src="https://gist.github.com/wanwanvm/87208711cfb84fd27f7bc42e82a45ab7.js"></script>
