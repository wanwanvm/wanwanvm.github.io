---
layout: post
title: Cara Mengaktifkan .htaccess apache di server ubuntu
tags: [Arduino]
fullview: false
category : ubuntu
description : Cara Mengaktifkan .htaccess apache di server ubuntu
comments: true
---
**Cara Mengaktifkan .htaccess apache di server ubuntu**

cara mengaktifkan .htaccess apache di server ubuntu, terkadang kita sering melukapan nya. seperti kasus di framework ci
kita tidak bisa menghilangkan index.php seperti dibawah ini :

![_error]({{ site.baseurl }}/images/error.png)

File .htaccess merupakan file penting pada sebuah aplikasi web karena dengan menggunakan fitur tersebut kita dapat:

- URL redirection (Mengalihkan URL)
- URL shortening  (Memendekkan URL)
- Untuk beberapa halaman web dan file yang berbeda (Access Security Control )
- Dan masih banyak lagi penggunaanya

**langkah - Langkah nya**

- cari file /etc/apache2/apache2.conf selanjutnya edit dengan perintah :
<script src="https://gist.github.com/wanwanvm/d7e4fc66b1f0b9ce20a0c8480dd45f8d.js"></script>

cari dan editlah tulisan **none** menjadi **All**

**AllowOverride All**
![_error2]({{ site.baseurl }}/images/error2.png)

- Selanjutnya aktifkan  ModRewrite dengan perintah :

<script src="https://gist.github.com/wanwanvm/0ad0225a4c2bca2d5f14508c64f7b3e4.js"></script>

- Langkah terakhir lakukan restart Apache :

<script src="https://gist.github.com/wanwanvm/e69af18ef36f521dba5967b4637086a4.js"></script>

