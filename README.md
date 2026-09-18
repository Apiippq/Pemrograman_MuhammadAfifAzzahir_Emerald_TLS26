# Pemrograman_MuhammadAfifAzzahir_Emerald_TLS26

## Identitas
- **Nama Lengkap:** Muhammad Afif Azzahir
- **Kelompok:** Emerald

## Penjelasan Singkat Isi Repository
Repository ini berisi penyelesaian dari dua problem pemrograman dasar pada kegiatan ospek jurusan (TETI Lab Skill 2026). Sesuai dengan instruksi penugasan, seluruh baris kode C++ (*source code*) murni dikembangkan dengan membuat *user-defined function* secara manual dan hanya mengandalkan library `<iostream>` tanpa menggunakan fungsi bawaan tambahan lainnya.

Berikut adalah penjelasan logika singkat dari kedua program yang ada di dalam repository ini:

### 1. Problem 1: The Last Astronaut (`Problem1.cpp`)
Program ini menyimulasikan sistem eliminasi astronot dalam formasi melingkar. Penyelesaian masalah menggunakan array dinamis untuk menampung nomor astronot. Untuk menghitung lompatan ke-K dalam urutan yang melingkar, program menggunakan rumus pembagian sisa (modulo) sehingga hitungan tidak keluar dari batas array yang ada dan kembali ke awal. Setiap kali astronot tereliminasi, sisa elemen di sebelah kanannya akan digeser ke kiri. Nilai K kemudian dimodifikasi secara dinamis sesuai aturan (ditambah 2 untuk nomor genap, dikurang 1 untuk ganjil, minimal batas K adalah 2). Perulangan terus terjadi hingga memori array hanya menyisakan satu elemen terakhir sebagai pemenang.

### 2. Problem 2: Alien-In-The-Middle (`Problem2.cpp`)
Program ini merepresentasikan sistem sandi yang mengubah susunan huruf berdasarkan huruf di posisi sebelumnya. Logika utamanya bergantung pada konversi karakter (huruf kapital) menjadi nilai numerik berstandar ASCII dalam rentang 1-26. Karena dilarang menggunakan pustaka bawaan, pencarian panjang *string* dieksekusi secara manual menggunakan perulangan berurutan. Untuk karakter kedua dan seterusnya, nilai huruf aslinya ditambahkan dengan nilai huruf yang tepat berada sebelumnya. Untuk menjaga hasil penjumlahan tetap menjadi huruf kapital (A-Z) serta menghindari pergeseran yang berlebih, program ini membungkus perhitungannya dengan rumus modulo 26, lalu meresikannya kembali menjadi *char* alfabet.
