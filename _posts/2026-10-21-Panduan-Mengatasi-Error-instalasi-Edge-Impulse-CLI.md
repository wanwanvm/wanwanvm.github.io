---
layout: post
title: "Cara Mengatasi Error Instalasi Edge Impulse CLI (node-gyp & Visual Studio Build Tools)"
date: 2026-10-21 00:15:00 +0700
categories: [IoT, Troubleshooting]
tags: [edge-impulse, nodejs, npm, windows, node-gyp]
author: AI4IoT Team
toc: true
description: "Panduan lengkap mengatasi kendala error kompilasi native C++ node-gyp dan serialport saat memasang edge-impulse-cli di Windows PowerShell."
---

Saat memasang alat **Edge Impulse CLI** di Windows PowerShell menggunakan perintah `npm install -g edge-impulse-cli`, Anda mungkin mendapati proses terhenti dengan log galat `node-gyp` seperti berikut:

```text
npm error gyp ERR! find VS You need to install the latest version of Visual Studio
npm error gyp ERR! find VS including the "Desktop development with C++" workload
npm error gyp ERR! stack Error: Could not find any Visual Studio installation to use
```

Tulisan ini merangkum akar masalah beserta dua solusi utama yang dapat langsung Anda terapkan.

---

## 1. Analisis Akar Masalah

Ada tiga faktor utama yang memicu galat ini di lingkungan Windows:

1. **Dependensi Modul Native (`@serialport/bindings`):** Paket Edge Impulse memerlukan komunikasi serial perangkat keras. Komponen ini ditulis dalam C++ dan membutuhkan proses kompilasi native jika binary siap pakai tidak ditemukan.
2. **Ketiadaan Toolchain Kompilator C++:** Utilitas `node-gyp` memerlukan kompilator MSVC (Microsoft Visual C++) untuk membangun pustaka biner di Windows.
3. **Versi Node.js Terlalu Baru (Bleeding-Edge):** Menggunakan versi rilis paling baru (misalnya Node.js v24.x) sering kali belum didukung oleh prebuilt binary pustaka native pihak ketiga, sehingga memaksa instalasi melakukan kompilasi manual dari kode sumber.

---

## 2. Solusi 1: Beralih ke Node.js Versi LTS (Paling Cepat)

Solusi tercepat dan paling bersih adalah beralih ke versi **LTS (Long Term Support)** seperti Node.js 20 atau 22. Paket pustaka native umumnya sudah menyediakan prebuilt binary untuk versi LTS, sehingga Anda tidak perlu mengompilasi kode C++.

### Opsi A: Menggunakan NVM for Windows

Jika Anda mengelola versi Node dengan NVM:

```bash
# Pasang Node.js LTS (v20)
nvm install 20

# Aktifkan versi tersebut
nvm use 20

# Pastikan versi sudah aktif
node -v
```

### Opsi B: Pemasangan Manual

1. Buka [Situs Resmi Node.js](https://nodejs.org/).
2. Unduh berkas instalasi bertanda **LTS**.
3. Selesaikan instalasi dan buka kembali PowerShell.

Setelah versi LTS aktif, bersihkan cache npm dan pasang kembali CLI:

```powershell
npm cache clean --force
npm install -g edge-impulse-cli
```

---

## 3. Solusi 2: Memasang Visual Studio Build Tools (C++)

Jika alur kerja Anda mengharuskan penggunaan versi Node.js tertentu atau kompilasi lokal tetap dibutuhkan, pasang toolchain C++ resmi dari Microsoft.

### Langkah-langkah:

1. Unduh penginstal dari [Visual Studio Downloads](https://visualstudio.microsoft.com/downloads/).
2. Gulir ke bagian **Tools for Visual Studio**, lalu pilih **Build Tools for Visual Studio**.
3. Jalankan penginstal (*Visual Studio Installer*).
4. Pada tab **Workloads**, beri tanda centang pada:
   * **Desktop development with C++** (*Pengembangan Desktop dengan C++*)
5. Di panel detail sebelah kanan, pastikan komponen berikut terpilih:
   * **MSVC v143** (atau versi build tools terbaru)
   * **Windows 10/11 SDK**
6. Klik tombol **Install** di pojok kanan bawah dan tunggu hingga proses selesai.
7. Nyalakan ulang terminal PowerShell.

---

## 4. Konfigurasi Lingkungan (Opsional)

Jika setelah pemasangan Build Tools sistem masih belum mengenali kompilator, jalankan perintah konfigurasi berikut pada PowerShell dengan hak akses administrator:

```powershell
npm config set msvs_version 2022
```

Pastikan juga runtime Python 3 sudah dikenali di path sistem:

```powershell
python --version
```

---

## 5. Verifikasi Akhir

Setelah salah satu solusi di atas diterapkan, ulangi instalasi paket Edge Impulse CLI:

```powershell
npm install -g edge-impulse-cli
```

Uji apakah CLI sudah dapat dipanggil dengan benar:

```powershell
edge-impulse-daemon --version
```

Jika nomor versi tampil tanpa pesan galat, instalasi Edge Impulse CLI telah berhasil diselesaikan.
