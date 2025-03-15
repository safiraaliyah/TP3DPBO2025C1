
from Animal import Animal
from Pet import Pet
from WildAnimal import WildAnimal
from Dog import Dog
from Cat import Cat
from Bird import Bird
from Food import Food
from Toy import Toy
from PetProduct import PetProduct
from PetShop import PetShop

def main():
    # Membuat beberapa hewan
    dog1 = Dog("Canine", "Buddy", "John", True, "Golden Retriever", 25.5)
    dog2 = Dog("Canine", "Max", "Sarah", True, "German Shepherd", 30.2)
    
    cat1 = Cat("Feline", "Whiskers", "Emily", True, "Orange Tabby", False)
    cat2 = Cat("Feline", "Mittens", "David", True, "Black", True)
    
    bird1 = Bird("Aves", "Tweety", "Linda", True, True, "Short")
    bird2 = Bird("Aves", "Rio", "Michael", False, False, "Curved")
    
    # Membuat beberapa produk
    product1 = PetProduct("Royal Canin", "Dry Food", "Kibble", "Adult", 49.99, 20)
    product2 = PetProduct("KONG", "Ball", "Rubber", "All Ages", 12.99, 35)
    product3 = PetProduct("Purina", "Wet Food", "Plastic", "Senior", 1.99, 100)
    
    # Membuat toko hewan peliharaan dengan hewan dan produk awal
    pet_shop = PetShop("Happy Paws Pet Shop", "123 Main Street", 
                      [dog1], [cat1], [bird1], [product1, product2])
    
    # Menambahkan lebih banyak hewan dan produk ke toko hewan peliharaan
    pet_shop.add_dog(dog2)
    pet_shop.add_cat(cat2)
    pet_shop.add_bird(bird2)
    pet_shop.add_product(product3)
    
    # Menampilkan informasi toko hewan peliharaan
    print("Informasi Toko Hewan Peliharaan:")
    print(f"Nama: {pet_shop.get_name()}")
    print(f"Lokasi: {pet_shop.get_location()}")
    
    print("\nAnjing yang Tersedia:")
    for dog in pet_shop.get_dogs():
        print(f"- {dog.get_name()} ({dog.get_breed()})")
        print(f"  Spesies: {dog.get_species()}")
        print(f"  Pemilik: {dog.get_owner()}")
        print(f"  Berat: {dog.get_weight()}kg")
        print(f"  Vaksinasi: {'Ya' if dog.is_vaccinated() else 'Tidak'}")
        print()
    
    print("Kucing yang Tersedia:")
    for cat in pet_shop.get_cats():
        print(f"- {cat.get_name()} ({cat.get_fur_color()})")
        print(f"  Spesies: {cat.get_species()}")
        print(f"  Pemilik: {cat.get_owner()}")
        print(f"  Berbulu panjang: {'Ya' if cat.is_long_haired() else 'Tidak'}")
        print(f"  Vaksinasi: {'Ya' if cat.is_vaccinated() else 'Tidak'}")
        print()
    
    print("Burung yang Tersedia:")
    for bird in pet_shop.get_birds():
        print(f"- {bird.get_name()}")
        print(f"  Spesies: {bird.get_species()}")
        print(f"  Pemilik: {bird.get_owner()}")
        print(f"  Bisa terbang: {'Ya' if bird.can_fly() else 'Tidak'}")
        print(f"  Jenis paruh: {bird.get_beak_type()}")
        print(f"  Vaksinasi: {'Ya' if bird.is_vaccinated() else 'Tidak'}")
        print()
    
    print("Produk yang Tersedia:")
    for product in pet_shop.get_products():
        print(f"- {product.get_brand()} {product.get_type()}")
        print(f"  Material: {product.get_material()}")
        print(f"  Usia Target: {product.get_target_age()}")
        print(f"  Harga: ${product.get_price()}")
        print(f"  Stok: {product.get_stock_quantity()} unit")
        print()
    
    # Mendemonstrasikan multiple inheritance
    print("Mendemonstrasikan Multiple Inheritance:")
    print(f"Product1 adalah Food ({product1.get_brand()} {product1.get_type()}) dan juga Toy (terbuat dari {product1.get_material()} untuk {product1.get_target_age()} hewan peliharaan)")
    
    # Mendemonstrasikan hierarchical inheritance
    wild_animal = WildAnimal("Felidae", "Tiger", "Hutan", True)
    print("\nMendemonstrasikan Hierarchical Inheritance:")
    print("Baik Pet maupun WildAnimal mewarisi dari Animal:")
    print(f"Pet: {dog1.get_name()} (Pemilik: {dog1.get_owner()})")
    print(f"WildAnimal: {wild_animal.get_name()} (Habitat: {wild_animal.get_habitat()}, Terancam Punah: {'Ya' if wild_animal.is_endangered() else 'Tidak'})")

if __name__ == "__main__":
    main()