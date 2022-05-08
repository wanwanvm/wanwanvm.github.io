---
layout: post
title: Menambahkan Libary Arduino di Ubuntu
tags: [Arduino]
---

1. Menambahkan LCD LiquidCrystal_I2C.h
cd /usr/share/arduino/libraries/
sudo wget https://downloads.arduino.cc/libraries/github.com/marcoschwartz/LiquidCrystal_I2C-1.1.2.zip
unzip LiquidCrystal_I2C-1.1.2.zip 
lakukan rename nama foldernya ternyata tidak bolah ada Numerik
mv LiquidCrystal_I2C-1.1.2 LiquidCrystalI2C

2. Menambahkan MH-Real-Time CM 2 (https://www.arduinolibraries.info/libraries/rt-clib) 

cd /usr/share/arduino/libraries/
sudo wget https://downloads.arduino.cc/libraries/github.com/adafruit/RTClib-2.0.2.zip
unzip RTClib-2.0.2.zip
lakukan rename nama foldernya ternyata tidak bolah ada Numerik
mv RTClib-2.0.2 RTClib


silahkan kirim masukan untuk saya ingin membuat apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
