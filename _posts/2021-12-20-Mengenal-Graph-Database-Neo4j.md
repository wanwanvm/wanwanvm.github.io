---
layout: post
title: Mengenal Graph Database Menggunakan Neo4j
tags: [basic]
fullview: false
category : tutorial
description : belajar mengenal Graph Database menggunakan Neo4j
comments: true
---
<div style="text-align: justify">
Banyak pertanyaan yang muncul di benak saya saat Dosen Saya **Dr. Arya Adhyaksa Waskita** menyampaikan tentang Graph Database menggunakan Neo4j
dan akhirnya saya mencari informasi apa itu Graph Database dan Neo4j itu sendiri
</div>
**Apa Graph Database ?**
jika saya sadur dari wikipedia
<div style="text-align: justify">
https://id.wikipedia.org/wiki/Graph_database
Graph database dalam dunia ilmu komputer adalah database yang menggunakan struktur data graph yg memiliki komponen node, edge dan properties unutk merepresentasikan penyimpanan data. Graph database menyediakan index-free adjacency yang artinya setiap elemen berisi direct pointer ke adjacent element dan tidak membutuhkan lagi suatu index lookups.
</div>
Berikut struktur dari graph database: 
![_config.yml]({{ site.baseurl }}/images/grapdatabase.png)

di mana Setiap simpul melambangkan suatu entitas seperti orang, bisnis, akun, atau item lain yang hendak dilacak. 

berdasarkan sifat nya 
<div style="text-align: justify">
Dibanding dengan relational database, graph database sering lebih cepat untuk himpunan data asosiatif, dan memetakan lebih langsung ke struktur aplikasi berorientasi objek (object-oriented application). Database ini dapat diskala lebih alamiah ke himpunan data lebih besar karena umumnya tidak membutuhkan operasi "join" yang mahal. Karena kurang tergantung dari skema kaku, mereka lebih cocok untuk dikelola secara ad hoc dan data yang berubah-ubah dengan skema yang terus diperbarui. Sebaliknya, relational database umumnya lebih cepat dalam mengerjakan operasi yang sama dengan jumlah elemen data yang lebih banyak.
</div>

**Apa Neo4j?**
<div style="text-align: justify">
Berbeda dari database relasional, sebuah graph database tidak memiliki skema seperti tabel dan kolom yang berbeda dengan isi (record). Neo4j adalah salah satu Graph Database populer dengan Cypher Query Language (CQL). Neo4j ditulis dalam Bahasa Java dan Neo4j adalah tool open source pertama untuk Grafik Database.

Pada Neo4J data direpresentasikan dalam bentuk Node dan Edge. Node meupakan titik edge adalah penghubung antar dua Node. Baik Node dan Edge memiliki atribut yang bisa kita sesuaikan. Sebelum menciptakan Node atau Edge, bisa kita definisikan atribut yang ada di tiap Node atau Edge tersebut. Hal ini opsional tidak wajib tapi merupakan best practice untuk dilakukan.

Perancangan database di Neo4J hanya sebatas desain Node dan Edge. TIdak ada lah istilah tabel atau database dalam Neo4J. Hal ini berbeda dengan basisdata RDBMA atau NoSQL lainnya. Pada basis data lain kita harus menciptakan database dulu lalu kita menciptakan tabel di dalam database tersebut. Pada sistem RDBMS atau NoSQL lainnya, bisa ada beberapa database dalam satu database server, misal database penjualan, database barang dan sebagainya. Sedangkan dalam tiap database terdapat tabel-tabel yang menyimpan data.

Untuk Neo4J, dalam satu database server Neo4J hanya ada satu database, kita tidak perlumendefinisikan nama databasenya, juga tidak ada tabel didalam database tersebut. Sehingga ketika kita ingin mengubah database maka seluruh file di direktori data di Neo4J harus dihapus secara manual. Cara ini yang paling cepat dibanding menghapus Node dan Edge.

Selain memiliki kemampuan menyimpan data dalam bentuk Node dan Edge, Neo4J juga memiliki bahasa query sendiri yang diberi nama Cypher. Cypher disini ada kemiripan dengan Gremlin. Bahkan dikatakan bahwa Neo4J termasuk yang duku pertama kali mempopulerkan Gremlin. Akan tetapi sekarang, Neo4J mulai meninggalkan Gremlin dan beralih ke Cypher.
</div>
Lalu setelah ini kita akan membahas tentang cara install Neo4J tapi dalam versi desktop di Sistem Operasi Windows 

**Cara Install di Sistem Operasi Windows**
1. Download aplikasinya terlebih dahulu di
  https://neo4j.com/download-center/#desktop
  terdapat alternatif pilihan versi disini saya memilih Neo4j Desktop 1.4.11 versi OS windows silahkan sesuaikan dengan OS masing masing
  besar file kisaran 600 Mb dan jangan lupa ikuti petunjuk pengisian informasi dan key penginstalan versi desktop
2. setelah itu lakukan instalasi aplikasi tersebut
3. Setelah itu akan muncul tampilan seperti dibawah ini dan jangan lupa pilih only for me(windows)

![_config.yml]({{ site.baseurl }}/images/1.png)
4. Lalu akan muncul tampilan seperti dibawah yang menandakan telah berhasil install.
![_config.yml]({{ site.baseurl }}/images/4.png)
5. Setelah aplikasi sudah berhasil terinstall, lalu buka link alamat berikut http://localhost:7474/ lalu akan muncul tampilan seperti dibawah.
  ![_config.yml]({{ site.baseurl }}/images/6.png)
6. Dan buka aplikasi hasil installer 
![_config.yml]({{ site.baseurl }}/images/5.png)
di artikel berikutnya akan kita coba membuat database graph di Neo4J 


sumber : 
1. https://neo4j.com/developer/graph-database/
2. https://id.wikipedia.org/wiki/Graph_database
