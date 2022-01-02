---
layout: post
title: CURD (create, retrieve, update dan delete) pada Neo4J
---

dalam suatu menajemen database pasti ada suatu operasi CURD ( Create. Retrive, Update dan Delete ) begitu pula pada database Neo4J juga dapat melakukan operasi CURD layaknya database lainya. Tulisan ini membahas cara-cara tersebut menggunakan cypher query, yang merupakan query khusus untuk graph database pada Neo4j
Yang diulas pada catatan kali ini hanya bagaimana CRUD pada node, tanpa relationship

Graph database menggunakan node dan relationship untuk memodelkan dan menyimpan data. Node merupakan data itu sendiri, sedangkan relationship menggambarkan keterkaitan data dengan data yang lain. Node dan relationship bisa memiliki berbagai atribut (sifat dari data) yang dapat menggambarkan isi dari data tersebut. dibawah ini adalah contoh sederhana operasi CRUD pada Neo4j.

1. CREATE
Bagian pertama adalah bagaimana cara membuat node beserta atributnya. Node merupakan inti data dari graph database. Cypher menyimbolkan node menggunakan tanda kurung buka-tutup, dengan data yang berupa string di dalamnya. Contoh berikut berturut-turut adalah node "mahasiswa", node' mahasiswa' dengan label Mahasiswa, dan node 'mahasiswa' dengan atribut nama :
<script src="https://gist.github.com/wanwanvm/16c3e747f604e6aeb102edaffd6ed697.js"></script>

Untuk membuat node digunakan query "CREATE" sebagai berikut :

<script src="https://gist.github.com/wanwanvm/9f80574a69de4f2ffb7a5c985fcca6c4.js"></script>


2. RETRIEVE

3. UPDATE

4. DELETE


