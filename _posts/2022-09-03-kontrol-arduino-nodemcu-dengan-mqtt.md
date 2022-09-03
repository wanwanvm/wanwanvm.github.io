---
layout: post
title: Cara Mudah Kontrol arduino nodemcu dengan MQTT
tags: [Arduino]
---

Komponen/libary yang dibutuhkan untuk mengontrol nodemcu dengan MQTT :
1. libary pubsubclient  yang dapat di download dari <a href="https://github.com/knolleary/pubsubclient">https://github.com/knolleary/pubsubclient</a>
2. untuk testing mqtt di local silahkan donwload mqtt dari mosquitto yang bisa di donwload di <a href="https://www.mosquitto.org/download/">https://www.mosquitto.org/download/</a>

setelah mqtt sudah terinstall masuk ke CMD jika menggunakan windows dan lakukan perintah 
C:\Program Files\mosquitto>mosquitto_pub.exe -h broker.hivemq.com -t inicontoh2 -m "nama kamu siapa"
perintah tersebut untuk mengirim topik dengan nama topik inicontoh2 dan dengan isi topik " nama kamu siapa "

dan di cmd lainnya lakukan perintah
C:\Program Files\mosquitto>mosquitto_sub.exe -h broker.hivemq.com -t inicontoh2 -v
perintah diatas untuk menerima topik yang di kirim dan akan menampilkan isi topi inicontoh2 = nama kamu siapa


<script src="https://gist.github.com/wanwanvm/175d1fcfa5cf900c7f0cf0a1be76e823.js"></script>

dengan perintah diatas maka nodemcu akan mengirim client.publish("miswan2", "hello world");
dan akan menerima topik di miswan1 
jika topik miswan1 diberi string 0 maka led nodemcu akan mati dan jika diberi nilai 1 maka led akan hidup


artikel yang terkait di <a href="https://www.youtube.com/watch?v=A14KWOrbwt8&t=261s">https://www.youtube.com/watch?v=A14KWOrbwt8&t=261s</a>

silahkan kirim masukan untuk saya ingin membuat artikel apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
