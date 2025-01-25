---
layout: post
title: Penggunaan Interrupt pada Arduino ESP32
tags: [Kelas Arduino]
fullview: false
category : Kelas Arduino
description : Penggunaan Interrupt pada Arduino ESP32
comments: true
---
**Penggunaan Interrupt pada Arduino ESP32*

**Penjelasan Interrupt di Arduino**

Interrupt adalah mekanisme dalam pemrograman mikrokontroler, termasuk Arduino, yang memungkinkan perangkat keras atau perangkat lunak untuk mengganggu aliran program utama guna menangani kejadian tertentu dengan cepat. Dengan interrupt, mikrokontroler dapat merespons peristiwa secara asinkron tanpa harus terus-menerus memeriksa (polling) kondisi tertentu.


**Cara Kerja Interrupt**
1. Normal Execution: Program utama (loop utama) berjalan seperti biasa.
2. Interrupt Trigger: Ketika suatu kondisi atau peristiwa tertentu terjadi (misalnya perubahan sinyal pada pin tertentu), interrupt dipicu.
3. ISR (Interrupt Service Routine): Mikrokontroler menghentikan sementara program utama dan menjalankan fungsi khusus (ISR) yang telah ditentukan untuk menangani interrupt.
4. Kembali ke Program Utama: Setelah ISR selesai, mikrokontroler melanjutkan eksekusi program utama dari titik terakhir.

**Jenis Interrupt di Arduino**
1. External Interrupts:
    * Terkait dengan pin tertentu pada Arduino.
    * Dapat dipicu oleh sinyal eksternal (misalnya, tombol, sensor).
    * Pin interrupt tergantung pada jenis board Arduino:
        * Arduino Uno: Pin 2 dan 3.
        * Arduino Mega: Pin 2, 3, 18, 19, 20, 21.
        * Arduino Leonardo: Pin 0, 1, 2, 3, 7.
2. Timer Interrupts:
    * Terkait dengan timer internal mikrokontroler.
    * Berguna untuk tugas berulang dengan interval waktu tertentu.
3. Pin Change Interrupts:
    * Dapat dipicu oleh perubahan pada pin mana saja, bukan hanya pin interrupt khusus.

**Fungsi Utama untuk Interrupt**
1. attachInterrupt(pin, ISR, mode):
    * Mengatur interrupt pada pin tertentu.
    * Pin: Nomor pin tempat interrupt ditetapkan.
    * ISR (Interrupt Service Routine): Fungsi yang dipanggil ketika interrupt terjadi.
    * Mode: Kondisi pemicu interrupt:
        * LOW: Pemicu saat sinyal rendah.
        * CHANGE: Pemicu saat sinyal berubah (naik atau turun).
        * RISING: Pemicu saat sinyal naik.
        * FALLING: Pemicu saat sinyal turun.
2. detachInterrupt(pin):
    * Menonaktifkan interrupt pada pin tertentu.

**Contoh Penggunaan Interrupt pada button di Arduino esp32** 

lebih lengkapnya bisa di lihat di gambar wiring di bawah ini :
![_wiring]({{ site.baseurl }}/images/wokwi interupt.png)



**Kode ini Penggunaan Interrupt pada button di Arduino esp32.**
**Kode ESP32**

<script src="https://gist.github.com/wanwanvm/ad40933d4efc969e9cbf2182cb00867f.js"></script>

