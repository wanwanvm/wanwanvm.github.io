---
layout: post
title: Mengatasi php tidak terbaca di server nginx ubuntu
tags: [nginx]
---

Cara Mengatasi File PHP yang tidak terbaca di sever NGINX pada sistem operasi Linux Ubuntu.
1. Cek php dengan perintah php --version
2. jika tidak terdeteksi lakukan instalasi php dengan perintah apt install php7.4-cli
3. kemudian lakukan cek php jika sudah terinstall akan muncul seperti ini: 
php --version
PHP 7.4.3-4ubuntu2.18 (cli) (built: Feb 23 2023 12:43:23) ( NTS )
Copyright (c) The PHP Group
Zend Engine v3.4.0, Copyright (c) Zend Technologies
with Zend OPcache v7.4.3-4ubuntu2.18, Copyright (c), by Zend Technologies
4. kemudian lakukan perintah : sudo apt install php7.4-fpm
5. jalankan perintah untuk konfigurasi virtual sever :  nano /etc/nginx/sites-enabled/siordik (siordik sesuaikan dengan setingan yang terinstall)
6. kemudian sesuaikan dengan isi teks seperti dibawah ini untuk nama server sesuaikan
<script src="https://gist.github.com/wanwanvm/d1adcab4b200763828b7983488ef9363.js"></script>
7. kemudian jalankan perintah : sudo nginx -t
jika berhasil maka akan tampil seperti ini :
root@siordik:/var/www/siordik/html# sudo nginx -t
nginx: the configuration file /etc/nginx/nginx.conf syntax is ok
nginx: configuration file /etc/nginx/nginx.conf test is successful
8. selanjutnya lakukan restart nginx dengan perintah : sudo service nginx restart
9. jalankan perintah untuk menjalankan service php nya :  sudo service php7.4.3-fpm start 

silahkan coba jalankan php di browser maka seharusnya php sudah terbaca

artikel terkait  <a href="[http://saptaji.com/2015/02/02/membaca-dan-menulis-data-ke-eeprom-arduino/](https://www.hostingan.id/install-php-7-4-dan-nginx-di-ubuntu-20-04/)">https://www.hostingan.id/install-php-7-4-dan-nginx-di-ubuntu-20-04/</a>


silahkan kirim masukan untuk saya ingin membuat apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
