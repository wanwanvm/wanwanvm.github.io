---
layout: post
title: Panduan Instalasi Graph Database Dengan Neo4j di Linux Ubuntu
tags: [Neo4j]
fullview: false
category : neo4j
description : Panduan Instalasi Graph Database Dengan Neo4j di Linux Ubuntu
comments: true
---
**Install Neo4J**

Karena Neo4J adalah based on Java Language Java 8 tidak ada dalam paket Ubuntu 20.04.3 LTS dan anda perlu menginstallnya secara manual jadi komputer kita harus terinstall Java Runtime, di sini saya asumsikan komputer anda sudah ada Java Runtime nya. Untuk pengguna Debian bisa menggunakan OpenJDK 8 backports.

**Menggunakan Reposiory Debian**

Untuk menginstall Neo4J kita gunakan Repository Debian yang juga bisa digunakan oleh Ubuntu, untuk menggunakan repository ini kita perlu melakukan langkah berikut :

<script src="https://gist.github.com/wanwanvm/9f8b15b9350daf8eca81770e28a8236a.js"></script>

**Install Neo4J**

Setelah repository sudah kita daftarkan dalam list repo komputer kita, kemudian enginstall Neo4Jnya, silahkan pilih Edition mana yang akan anda install dengan cara sebagai berikut : 

<script src="https://gist.github.com/wanwanvm/c6840f3990d7e655f0b77bf885c8d661.js"></script>

**Enterprise Edition:**

<script src="https://gist.github.com/wanwanvm/9e936abcdfa9c5cc85828164fea70bcf.js"></script>

**Menggunakanan Neo4J**

Untuk menggunakan Neo4J kita harus mengaktifkannya dulu dengan cara lakukan perintah ini via Terminal anda :

<script src="https://gist.github.com/wanwanvm/717a7412c1ef34449952028fa32bfe6b.js"></script>

Setelah itu buka browser anda dan arahkan ke http://localhost:7474/ maka seperti inilah tamppilannya :

![_hasil setelah install]({{ site.baseurl }}/images/hasilinstall.png)


