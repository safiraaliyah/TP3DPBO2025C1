import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Membuat beberapa hewan
        Dog dog1 = new Dog("Canine", "Buddy", "John", true, "Golden Retriever", 25.5f);
        Dog dog2 = new Dog("Canine", "Max", "Sarah", true, "German Shepherd", 30.2f);
        
        Cat cat1 = new Cat("Feline", "Whiskers", "Emily", true, "Orange Tabby", false);
        Cat cat2 = new Cat("Feline", "Mittens", "David", true, "Black", true);
        
        Bird bird1 = new Bird("Aves", "Tweety", "Linda", true, true, "Short");
        Bird bird2 = new Bird("Aves", "Rio", "Michael", false, false, "Curved");
        
        // Membuat beberapa produk
        PetProduct product1 = new PetProduct("Royal Canin", "Dry Food", "Kibble", "Adult", 49.99f, 20);
        PetProduct product2 = new PetProduct("KONG", "Ball", "Rubber", "All Ages", 12.99f, 35);
        PetProduct product3 = new PetProduct("Purina", "Wet Food", "Plastic", "Senior", 1.99f, 100);
        
        // Membuat toko hewan peliharaan dengan hewan dan produk awal
        List<Dog> initialDogs = new ArrayList<>(Arrays.asList(dog1));
        List<Cat> initialCats = new ArrayList<>(Arrays.asList(cat1));
        List<Bird> initialBirds = new ArrayList<>(Arrays.asList(bird1));
        List<PetProduct> initialProducts = new ArrayList<>(Arrays.asList(product1, product2));
        
        PetShop petShop = new PetShop("Happy Paws Pet Shop", "123 Main Street", 
                                     initialDogs, initialCats, initialBirds, initialProducts);
        
        // Menambahkan lebih banyak hewan dan produk ke toko hewan peliharaan
        petShop.addDog(dog2);
        petShop.addCat(cat2);
        petShop.addBird(bird2);
        petShop.addProduct(product3);
        
        // Menampilkan informasi toko hewan peliharaan
        System.out.println("Informasi Toko Hewan Peliharaan:");
        System.out.println("Nama: " + petShop.getName());
        System.out.println("Lokasi: " + petShop.getLocation());
        
        System.out.println("\nAnjing yang Tersedia:");
        for (Dog dog : petShop.getDogs()) {
            System.out.println("- " + dog.getName() + " (" + dog.getBreed() + ")");
            System.out.println("  Spesies: " + dog.getSpecies());
            System.out.println("  Pemilik: " + dog.getOwner());
            System.out.println("  Berat: " + dog.getWeight() + "kg");
            System.out.println("  Vaksinasi: " + (dog.isVaccinated() ? "Ya" : "Tidak"));
            System.out.println();
        }
        
        System.out.println("Kucing yang Tersedia:");
        for (Cat cat : petShop.getCats()) {
            System.out.println("- " + cat.getName() + " (" + cat.getFurColor() + ")");
            System.out.println("  Spesies: " + cat.getSpecies());
            System.out.println("  Pemilik: " + cat.getOwner());
            System.out.println("  Berbulu panjang: " + (cat.isLongHaired() ? "Ya" : "Tidak"));
            System.out.println("  Vaksinasi: " + (cat.isVaccinated() ? "Ya" : "Tidak"));
            System.out.println();
        }
        
        System.out.println("Burung yang Tersedia:");
        for (Bird bird : petShop.getBirds()) {
            System.out.println("- " + bird.getName());
            System.out.println("  Spesies: " + bird.getSpecies());
            System.out.println("  Pemilik: " + bird.getOwner());
            System.out.println("  Bisa terbang: " + (bird.canFly() ? "Ya" : "Tidak"));
            System.out.println("  Jenis paruh: " + bird.getBeakType());
            System.out.println("  Vaksinasi: " + (bird.isVaccinated() ? "Ya" : "Tidak"));
            System.out.println();
        }
        
        System.out.println("Produk yang Tersedia:");
        for (PetProduct product : petShop.getProducts()) {
            System.out.println("- " + product.getBrand() + " " + product.getType());
            System.out.println("  Material: " + product.getMaterial());
            System.out.println("  Usia Target: " + product.getTargetAge());
            System.out.println("  Harga: $" + product.getPrice());
            System.out.println("  Stok: " + product.getStockQuantity() + " unit");
            System.out.println();
        }
        
        // Mendemonstrasikan multiple inheritance (via interfaces di Java)
        System.out.println("Mendemonstrasikan Multiple Inheritance (via interfaces di Java):");
        System.out.println("Product1 adalah Food (" + product1.getBrand() + " " + product1.getType() + 
                         ") dan juga Toy (terbuat dari " + product1.getMaterial() + " untuk " + 
                         product1.getTargetAge() + " hewan peliharaan)");
        
        // Mendemonstrasikan hierarchical inheritance
        WildAnimal wildAnimal = new WildAnimal("Felidae", "Tiger", "Hutan", true);
        System.out.println("\nMendemonstrasikan Hierarchical Inheritance:");
        System.out.println("Baik Pet maupun WildAnimal mewarisi dari Animal:");
        System.out.println("Pet: " + dog1.getName() + " (Pemilik: " + dog1.getOwner() + ")");
        System.out.println("WildAnimal: " + wildAnimal.getName() + " (Habitat: " + wildAnimal.getHabitat() + 
                         ", Terancam Punah: " + (wildAnimal.isEndangered() ? "Ya" : "Tidak") + ")");
    }
}