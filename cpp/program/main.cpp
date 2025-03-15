
#include <iostream>
#include <vector>
#include "Animal.cpp"
#include "Pet.cpp"
#include "WildAnimal.cpp"
#include "Dog.cpp"
#include "Cat.cpp"
#include "Bird.cpp"
#include "Food.cpp"
#include "Toy.cpp"
#include "PetProduct.cpp"
#include "PetShop.cpp"

using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    // Membuat beberapa hewan
    Dog dog1("Canine", "Buddy", "John", true, "Golden Retriever", 25.5);
    Dog dog2("Canine", "Max", "Sarah", true, "German Shepherd", 30.2);
    
    Cat cat1("Feline", "Whiskers", "Emily", true, "Orange Tabby", false);
    Cat cat2("Feline", "Mittens", "David", true, "Black", true);
    
    Bird bird1("Aves", "Tweety", "Linda", true, true, "Short");
    Bird bird2("Aves", "Rio", "Michael", false, false, "Curved");
    
    // Membuat beberapa produk
    PetProduct product1("Royal Canin", "Dry Food", "Kibble", "Adult", 49.99, 20);
    PetProduct product2("KONG", "Ball", "Rubber", "All Ages", 12.99, 35);
    PetProduct product3("Purina", "Wet Food", "Plastic", "Senior", 1.99, 100);
    
    // Membuat toko hewan peliharaan dengan hewan dan produk awal
    PetShop petShop("Happy Paws Pet Shop", "123 Main Street", 
                    {dog1}, {cat1}, {bird1}, {product1, product2});
    
    // Menambahkan lebih banyak hewan dan produk ke toko hewan peliharaan
    petShop.addDog(dog2);
    petShop.addCat(cat2);
    petShop.addBird(bird2);
    petShop.addProduct(product3);
    
    // Menampilkan informasi toko hewan peliharaan
    cout << "Informasi Toko Hewan Peliharaan:" << endl;
    cout << "Nama: " << petShop.getName() << endl;
    cout << "Lokasi: " << petShop.getLocation() << endl;
    
    cout << "\nAnjing yang Tersedia:" << endl;
    for (Dog& dog : petShop.getDogs()) {
        cout << "- " << dog.getName() << " (" << dog.getBreed() << ")" << endl;
        cout << "  Spesies: " << dog.getSpecies() << endl;
        cout << "  Pemilik: " << dog.getOwner() << endl;
        cout << "  Berat: " << dog.getWeight() << "kg" << endl;
        cout << "  Vaksinasi: " << (dog.isVaccinated() ? "Ya" : "Tidak") << endl;
        cout << endl;
    }
    
    cout << "Kucing yang Tersedia:" << endl;
    for (Cat& cat : petShop.getCats()) {
        cout << "- " << cat.getName() << " (" << cat.getFurColor() << ")" << endl;
        cout << "  Spesies: " << cat.getSpecies() << endl;
        cout << "  Pemilik: " << cat.getOwner() << endl;
        cout << "  Berbulu panjang: " << (cat.isLongHaired() ? "Ya" : "Tidak") << endl;
        cout << "  Vaksinasi: " << (cat.isVaccinated() ? "Ya" : "Tidak") << endl;
        cout << endl;
    }
    
    cout << "Burung yang Tersedia:" << endl;
    for (Bird& bird : petShop.getBirds()) {
        cout << "- " << bird.getName() << endl;
        cout << "  Spesies: " << bird.getSpecies() << endl;
        cout << "  Pemilik: " << bird.getOwner() << endl;
        cout << "  Bisa terbang: " << (bird.getCanFly() ? "Ya" : "Tidak") << endl;
        cout << "  Jenis paruh: " << bird.getBeakType() << endl;
        cout << "  Vaksinasi: " << (bird.isVaccinated() ? "Ya" : "Tidak") << endl;
        cout << endl;
    }
    
    cout << "Produk yang Tersedia:" << endl;
    for (PetProduct& product : petShop.getProducts()) {
        cout << "- " << product.getBrand() << " " << product.getType() << endl;
        cout << "  Material: " << product.getMaterial() << endl;
        cout << "  Usia Target: " << product.getTargetAge() << endl;
        cout << "  Harga: $" << product.getPrice() << endl;
        cout << "  Stok: " << product.getStockQuantity() << " unit" << endl;
        cout << endl;
    }
    
    // Mendemonstrasikan multiple inheritance
    cout << "Mendemonstrasikan Multiple Inheritance:" << endl;
    cout << "Product1 adalah Food (" << product1.getBrand() << " " << product1.getType() 
         << ") dan juga Toy (terbuat dari " << product1.getMaterial() << " untuk " 
         << product1.getTargetAge() << " hewan peliharaan)" << endl;
    
    // Mendemonstrasikan hierarchical inheritance
    WildAnimal wildAnimal("Felidae", "Tiger", "Hutan", true);
    cout << "\nMendemonstrasikan Hierarchical Inheritance:" << endl;
    cout << "Baik Pet maupun WildAnimal mewarisi dari Animal:" << endl;
    cout << "Pet: " << dog1.getName() << " (Pemilik: " << dog1.getOwner() << ")" << endl;
    cout << "WildAnimal: " << wildAnimal.getName() << " (Habitat: " << wildAnimal.getHabitat() 
         << ", Terancam Punah: " << (wildAnimal.isEndangered() ? "Ya" : "Tidak") << ")" << endl;
    
    return 0;
}