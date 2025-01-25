---
layout: post
title: Penggunaan EEPROM pada button di Arduino ESP32
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Penggunaan EEPROM pada button di Arduino ESP32
comments: true
---
**Penggunaan EEPROM pada button di Arduino ESP32*

**EEPROM (Electrically Erasable Programmable Read-Only Memory)** adalah sebuah memori non-volatile yang dapat digunakan untuk menyimpan data pada ESP32, bahkan ketika perangkat dimatikan. Namun, ESP32 tidak memiliki EEPROM fisik seperti microcontroller lama. Sebagai gantinya, ESP32 mensimulasikan EEPROM menggunakan flash memory yang tertanam.

**Penjelasan Penyimpanan EEPROM pada ESP32**
Pada ESP32, data EEPROM disimpan dalam flash memory menggunakan library EEPROM.h. Berikut beberapa poin penting terkait penyimpanan EEPROM di ESP32:
1. Simulasi EEPROM:
    * EEPROM pada ESP32 sebenarnya adalah bagian dari flash memory yang disediakan untuk menyimpan data.
    * Flash memory ini memiliki siklus tulis/hapus terbatas (sekitar 10.000-100.000 kali), sehingga perlu digunakan dengan hati-hati.
2. Ukuran EEPROM:
    * Ukuran EEPROM dapat ditentukan saat inisialisasi dengan fungsi EEPROM.begin(size), di mana size adalah jumlah byte yang dialokasikan (maksimal 4096 byte).
    * Semua data di EEPROM akan dimuat ke RAM selama inisialisasi.
3. Proses Penulisan dan Penyimpanan:
    * Data ditulis ke buffer RAM terlebih dahulu menggunakan fungsi EEPROM.write() atau EEPROM.put().
    * Untuk menyimpan perubahan ke flash memory, Anda harus memanggil fungsi EEPROM.commit().
    * Jika Anda lupa memanggil EEPROM.commit(), data tidak akan disimpan ke flash.
4. Proses Pembacaan:
    * Data yang sudah disimpan dapat dibaca menggunakan fungsi EEPROM.read() atau EEPROM.get().
5. Hapus Flash:
    * Untuk menghapus seluruh data di EEPROM, Anda dapat menginisialisasi ulang ukuran atau menulis ulang data.
6. Kelemahan:
    * Flash memory memiliki siklus baca/tulis terbatas, jadi sebaiknya minimalkan penulisan berulang untuk menghindari kerusakan memori.

**Contoh Penggunaan EEPROM pada button di Arduino esp32** 

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/wokwi EEPROM.png)



**Kode ini Contoh Penggunaan EEPROM pada button di Arduino esp32**
**Kode ESP32**

<script src="https://gist.github.com/wanwanvm/106d34488bea67f54c53a4e928d2f1e4.js"></script>
