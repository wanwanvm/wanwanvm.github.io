---
layout: post
title: Cara Enable index.php mode rewrite di apache server ubuntu
tags: [ubuntu]
---

1. Langkah pertama pastikan apache sudah terinstall 
<script src="https://gist.github.com/wanwanvm/67d09678f44aa1b0c9cdf9d6f2aa6160.js"></script>
2.  langkah kedua Enable mod_rewrite Apache dengan a2enmod Command
<script src="https://gist.github.com/wanwanvm/dfe027ee49c2b7f6691a0a0199932e0c.js"></script>
3. men set Allow .htaccess File dengan VirtualHost dengan perintah
<script src="https://gist.github.com/wanwanvm/7eb8e9a003c3c65a042ef5360401cf16.js"></script>
dan isikan "AllowOverride All" seperti di bawah ini :
<script src="https://gist.github.com/wanwanvm/6cd5e72563b4fb4f7595079c4961ebdc.js"></script>


artikel terkait <a href="https://www.nicesnippets.com/blog/how-to-enable-indexphp-rewrite-mode-in-apache-ubuntu-1804">https://www.nicesnippets.com/blog/how-to-enable-indexphp-rewrite-mode-in-apache-ubuntu-1804</a>

silahkan kirim masukan untuk saya ingin membuat apa. Semoga bermanfaat.
jika kurang jelas bisa komentar atau dm twitter @wanwanvm
