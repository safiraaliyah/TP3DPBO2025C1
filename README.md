# Sistem Manajemen Toko Hewan Peliharaan

## Janji

Saya [ Safira Aliyah Azmi || 23092093 ] mengerjakan Latihan Praktikum 1 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahannya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Desain Program

Program ini dirancang untuk mengelola sistem toko hewan peliharaan dengan menerapkan konsep-konsep pemrograman berorientasi objek. Berikut adalah struktur hierarki kelas yang diimplementasikan:

### Struktur Kelas:

1. **Animal (Kelas Dasar)**
   - Properti: species, name
   - Metode: getter/setter untuk semua properti

2. **Pewarisan Langsung dari Animal:**
   - **Pet**: class untuk hewan peliharaan
     - Properti tambahan: owner, vaccinated
   - **WildAnimal**: class untuk hewan liar
     - Properti tambahan: habitat, endangered

3. **Pewarisan dari Pet:**
   - **Dog**: class untuk anjing
     - Properti tambahan: breed, weight
   - **Cat**: class untuk kucing
     - Properti tambahan: furColor, longHaired
   - **Bird**: class untuk burung
     - Properti tambahan: canFly, beakType

4. **Class Independen:**
   - **Food**: class untuk makanan hewan
     - Properti: brand, type
   - **Toy**: class untuk mainan hewan
     - Properti: material, targetAge

5. **Multiple Inheritance:**
   - **PetProduct**: class untuk produk hewan (mewarisi dari Food dan Toy)
     - Properti tambahan: price, stockQuantity

6. **Class Komposisi:**
   - **PetShop**: class untuk toko hewan
     - Properti: name, location
     - Komposisi: vector/array dari Dog, Cat, Bird, PetProduct

### Implementasi Konsep OOP:

1. **Inheritance (Pewarisan)**:
   - Single Inheritance: Pet dan WildAnimal mewarisi dari Animal
   - Hierarchical Inheritance: Dog, Cat, dan Bird mewarisi dari Pet
   - Multiple Inheritance: PetProduct mewarisi dari Food dan Toy
   - Hybrid Inheritance: Kombinasi dari hierarchical dan multiple inheritance dalam satu sistem

2. **Encapsulation (Enkapsulasi)**:
   - Semua properti dideklarasikan sebagai private
   - Akses dilakukan melalui metode getter dan setter

3. **Array of Objects**:
   - Penggunaan vector untuk menyimpan kumpulan objek Dog, Cat, Bird, dan PetProduct dalam class PetShop

## Alur Program

1. Program dimulai dengan pembuatan beberapa objek:
   - Objek Dog: dog1 dan dog2 
   - Objek Cat: cat1 dan cat2 
   - Objek Bird: bird1 dan bird2
   - Objek PetProduct: product1 (makanan), product2 (mainan), dan product3 (makanan basah)

2. Pembuatan objek PetShop dengan beberapa hewan dan produk awal.

3. Penambahan hewan dan produk tambahan ke dalam PetShop menggunakan metode add.

4. Menampilkan informasi PetShop:
   - Nama dan lokasi toko
   - Daftar anjing yang tersedia beserta detailnya
   - Daftar kucing yang tersedia beserta detailnya
   - Daftar burung yang tersedia beserta detailnya
   - Daftar produk yang tersedia beserta detailnya

5. Demonstrasi multiple inheritance dengan menampilkan atribut Food dan Toy dari objek PetProduct.

6. Demonstrasi hierarchical inheritance dengan membandingkan objek Pet (dog1) dan WildAnimal yang keduanya mewarisi dari kelas Animal.

## Implementasi Bahasa Pemrograman

Program ini diimplementasikan dalam tiga bahasa pemrograman:
1. C++
2. Python 
3. Java (sebagai bonus)

Setiap implementasi mempertahankan struktur dan konsep yang sama, namun disesuaikan dengan konvensi dan fitur khusus dari masing-masing bahasa pemrograman.