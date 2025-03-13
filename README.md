# TP 3 DPBO 2025

## -- Janji --

Saya Khana Yusdiana NIM 2100991 mengerjakan soal TP 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## -- Desain Program --

![1](https://github.com/marimoo0/TP3DPBO2025C2/blob/b771bf7f0386a033af2d7a2859cfa10857ec1eda/TP3.jpg)

Inheritance (Pewarisan)

- Komponen adalah kelas abstrak yang diwarisi oleh Cpu, Ram, dan Harddrive.
- Setiap subclass harus mengimplementasikan metode tampilkan_info().

Composition (Komposisi)

- Komputer memiliki objek Cpu, Harddrive, dan list of Ram.
- Komputer tidak mewarisi Komponen, tetapi menyimpan objek-objeknya sebagai atribut.

Array of Objects

- Komputer menyimpan beberapa RAM dalam list (ram_list).
- RAM bisa ditambahkan secara dinamis dengan tambah_ram().

Polymorphism (Polimorfisme)

- Komponen memiliki metode abstrak tampilkan_info() yang harus diimplementasikan oleh subclass.

## -- Penjelasan Alur --

Objek Komponen Dibuat

- Objek CPU (Cpu), RAM (Ram), dan Harddrive (Harddrive) dibuat.

Membuat Objek Komputer

- Komputer dibuat dengan menyimpan objek CPU, Harddrive, dan beberapa RAM dalam list.

Menambah RAM Secara Dinamis

- RAM tambahan bisa ditambahkan menggunakan tambah_ram().

Menampilkan Informasi Komputer

- Metode tampilkan_info() akan mencetak detail CPU, RAM, dan Harddrive ke layar.

## -- Dokumentasi saat Program di Jalankan --

![1](https://github.com/marimoo0/TP3DPBO2025C2/blob/e1a3fba3b7a09e21f6561fdbcd2312bd02acb001/Hasil.png)
