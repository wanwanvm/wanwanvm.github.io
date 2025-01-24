---
layout: post
title: Mengirimkan Data DHT22 ke Aplikasi Telegram dengan Arduino ESP32 Menggunakan Wokwi
tags: [Arduino]
fullview: false
category : Kelas Arduino
description : Mengirimkan Data DHT22 ke Aplikasi Telegram dengan Arduino ESP32 Menggunakan Wokwi
comments: true
---
**Mengirimkan Data DHT22 ke Aplikasi Telegram dengan Arduino ESP32 Menggunakan Wokwi**

menghubungkan sensor DHT22 ke ESP32 ke Aplikasi Chat Telegram menggunakan Wokwi (simulator perangkat keras virtual):

**Langkah 1: Membuat Bot Telegram**
1. Buka aplikasi Telegram dan cari akun BotFather.
2. Kirim perintah /newbot ke BotFather.
3. Beri nama bot Anda, lalu tentukan username bot (harus diakhiri dengan bot, misalnya MyWeatherBot).
4. Setelah bot dibuat, BotFather akan memberikan Token API. Simpan token ini karena akan digunakan di kode ESP32.


lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/Wokwi ESP32 google sheet.png)

Langkah 2: Kode Arduino
Gunakan kode berikut di Arduino IDE untuk membaca data dari DHT22 dan mengirimkannya ke Telegram.

<script src="https://gist.github.com/wanwanvm/88a8d3cebaa53f7d6f07229663cebfc1.js"></script>
