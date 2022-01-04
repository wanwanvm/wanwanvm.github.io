---
layout: post
title: Operasi Relationship dengan Cypher pada Neo4j
tags: [Neo4J]
fullview: false
category : tutorial
description : Operasi Relationship dengan Cypher pada Neo4j
comments: true
---
<div style="text-align: justify">
 Tulisan sebelumnya kita sudah membahas tentang CURD Sederhana pada database Neo4j dengan cypher. Pada pembuatan database tidak hanya membentuk suatu node saja tetapi perlu dibuat relationship antar node.
  
sebagai contoh ada 2 node data 'mahasiswa' dengan nama duta dan miswan, yang dibuat dengan 2 cypher query berikut :
  </div>
 <script src="https://gist.github.com/wanwanvm/103c60203d4267d1834d4fa826a1e83f.js"></script>
 Untuk membuat relationship, diperlukan 'penemuan' node terlebih dahulu, kemudian setelah ditemukan baru dibuat relationship yang diinginkan. Sebagai contoh, untuk kasus diatas, dunta memiliki hubungan TEMAN. Cypher query yang digunakan adalah berikut :

<script src="https://gist.github.com/wanwanvm/a8cf63e40a1415d298012445ba995789.js"></script>

Hasil dari query di atas adalah :
![_hubungan 1]({{ site.baseurl }}/images/hubungan 1.png)

![_hubungan 2]({{ site.baseurl }}/images/hubungan 2.png)


Seperti halnya node, relationship dapat memiliki atribut. Sebagai contoh, pada kasus di atas relationship "TEMAN" memiliki atribut "hubungan" dalam hal ini hubungan antara Duta dengan Miswan adalah Ketua. Maka relationship dapat diupdate dengan cypher query sebagai berikut :

<script src="https://gist.github.com/wanwanvm/1042c2da777b77bbae54a74658855362.js"></script>

Untuk menguji apakah query tersebut berhasil, lakukan query berikut :

<script src="https://gist.github.com/wanwanvm/803c136b856dfcc8fca80d63f695d63c.js"></script>

![_hubungan 3]({{ site.baseurl }}/images/hubungan 3.png)

Atribut-atribut lain dapat ditambahkan pada relationship (maupun node) dengan cara yang sama.

Seperti halnya node, relationship dapat dihapus (DELETE) menggunakan query berikut :

<script src="https://gist.github.com/wanwanvm/95927b5559ee2f20e1e993f88e4c7093.js"></script>

Query di atas digunakan untuk menghapus relationship dari node "Mahasiswa", dengan terlebih dahulu menemukan node, dan relasinya menggunakan OPTIONAL MATCH. OPTIONAL MATCH menghasilkan null value jika tidak menemukan relationship. Jika ada relationship 'r', maka relationship tersebut dihapus.

Semoga bermanfaat

Tulisan Selanjutnya akan kita bahas LIMIT dan SKIP 
