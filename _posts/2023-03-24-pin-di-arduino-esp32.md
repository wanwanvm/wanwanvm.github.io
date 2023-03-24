---
layout: post
title: Penggunaan PIN di Board Arduino ESP32
tags: [Arduino]
fullview: false
category : Arduino
description : Penggunaan PIN di Board Arduino ESP32
comments: true
---
**ESP32**

perancang akan memilih menggunakan development board ESP32 untuk keperluan tertentu. Contohnya, dalam artikel ini, disebutkan bahwa ada beberapa jenis development board yang kompatibel dan tersedia di warungrobot.com. Salah satunya adalah ESP32S DevKit DOIT yang memiliki 38 kaki pin.


**Periferal pada ESP32**
Sebagaimana pernah dibahas pada  tulisan yang lalu, ESP32 memiliki periferal sebagai berikut

    - 18 kanal ADC (Analog-to- Digital Converter)
    - 3 antarmuka SPI
    - 3 antarmuka UART
    - 2 antarmuka I2C
    - 16 kanal output PWM
    - 2 kanal DAC (Digital to Analog Converter)
    - 2 antarmuka I2S
    - 10 GPIO sensor kapasitif

Fitur ADC (analog to digital Converter) dan DAC (Digital To Analog Converter) spesifik dapat digunakan hanya pada pin -pin tertentu saja. Sedangkan fitur  UART, I2C, SPI, PWM dapat diaktifkan secara programmatically. Berikut adalah diagram pin – pin pada development Board ESP32

![_esp32]({{ site.baseurl }}/images/pinout.png)


**Informasi Lainnya yang terkait**
<a href="https://embeddednesia.com/v1/menggunakan-pin-gpio-pada-esp32/">https://embeddednesia.com/v1/menggunakan-pin-gpio-pada-esp32/</a>




