---
layout: post
title: CURD (create, retrieve, update dan delete) pada Neo4J
---

<div style="text-align: justify"> Dalam suatu menajemen database pasti ada suatu operasi CURD ( Create. Retrive, Update dan Delete ) begitu pula pada database Neo4J juga dapat melakukan operasi CURD layaknya database lainya. Tulisan ini membahas cara-cara tersebut menggunakan cypher query, yang merupakan query khusus untuk graph database pada Neo4j
Yang diulas pada catatan kali ini hanya bagaimana CRUD pada node, tanpa relationship

Graph database menggunakan node dan relationship untuk memodelkan dan menyimpan data. Node merupakan data itu sendiri, sedangkan relationship menggambarkan keterkaitan data dengan data yang lain. Node dan relationship bisa memiliki berbagai atribut (sifat dari data) yang dapat menggambarkan isi dari data tersebut. dibawah ini adalah contoh sederhana operasi CRUD pada Neo4j.
  </div>

1. CREATE
<div style="text-align: justify">
Bagian pertama adalah bagaimana cara membuat node beserta atributnya. Node merupakan inti data dari graph database. Cypher menyimbolkan node menggunakan tanda kurung buka-tutup, dengan data yang berupa string di dalamnya. Contoh berikut berturut-turut adalah node "mahasiswa", node' mahasiswa' dengan label Mahasiswa, dan node 'mahasiswa' dengan atribut nama :  </div>
<script src="https://gist.github.com/wanwanvm/16c3e747f604e6aeb102edaffd6ed697.js"></script>

Untuk membuat node digunakan query "CREATE" sebagai berikut :

<script src="https://gist.github.com/wanwanvm/9f80574a69de4f2ffb7a5c985fcca6c4.js"></script>


2. RETRIEVE

Node yang telah dibuat, dapat di-retrieve (diambil kembali) menggunakan query MATCH sebagai berikut :

<script src="https://gist.github.com/wanwanvm/275bbe080d77598962c96473be23e5c1.js"></script>

lebih ringkas nya :
<script src="https://gist.github.com/wanwanvm/ee6869f35105b0c5c60ded79baabd43b.js"></script>

klausa WHERE (pada query pertama) digunakan untuk melakukan seleksi dari node yang akan diambil. RETURN digunakan untuk menampilkan objek yang ada.

![_where]({{ site.baseurl }}/images/whare.png)
  

 Untuk mengambil semua node yang ada, digunakan query berikut : 

<script src="https://gist.github.com/wanwanvm/61218c38dff20c97ce897591fd3e3d75.js"></script>
 catatan untuk data yang besar harus di berikan LIMIT
  
3. UPDATE

  Cara melakukan update adalah dengan menemukan node yang diinginkan, kemudian menggunakan klausa SET. Misal ingin mengganti nama "Miswan" menjadi "Miswan Mr" dilakukan dengan query berikut :
  
  <script src="https://gist.github.com/wanwanvm/e885e26564f137735b10a4bc7cca6312.js"></script>

4. DELETE

Klausa DELETE digunakan untuk menghapus node yang ditemukan. Sama seperti ketika update, untuk menghapus node dilakukan terhadap pencarian node yang akan dihapus kemudian dihapus node tersebut. Sebagai contoh, node dengan atribut nama "Miswan Mr" akan dihapus, maka query yang digunakan adalah :
  
<script src="https://gist.github.com/wanwanvm/bb8e5e09456a58fc6c5f4ba8dd3e4bfd.js"></script>
  
"DETACH DELETE" digunakan untuk menghapus node berikut relationship-nya.


Artikel berikutnya adalah bagaimana membuat relationship antar node dengan node yang lain. Semoga bermanfaat.
