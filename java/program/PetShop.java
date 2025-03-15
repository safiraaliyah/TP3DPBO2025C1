
import java.util.ArrayList;
import java.util.List;

public class PetShop {
    private String name;
    private String location;
    private List<Dog> dogs;
    private List<Cat> cats;
    private List<Bird> birds;
    private List<PetProduct> products;
    
    public PetShop() {
        this.dogs = new ArrayList<>();
        this.cats = new ArrayList<>();
        this.birds = new ArrayList<>();
        this.products = new ArrayList<>();
    }
    
    public PetShop(String name, String location, List<Dog> dogs, List<Cat> cats, List<Bird> birds, List<PetProduct> products) {
        this.name = name;
        this.location = location;
        this.dogs = dogs;
        this.cats = cats;
        this.birds = birds;
        this.products = products;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public void setLocation(String location) {
        this.location = location;
    }
    
    public void setDogs(List<Dog> dogs) {
        this.dogs = dogs;
    }
    
    public void setCats(List<Cat> cats) {
        this.cats = cats;
    }
    
    public void setBirds(List<Bird> birds) {
        this.birds = birds;
    }
    
    public void setProducts(List<PetProduct> products) {
        this.products = products;
    }
    
    public void addDog(Dog dog) {
        this.dogs.add(dog);
    }
    
    public void addCat(Cat cat) {
        this.cats.add(cat);
    }
    
    public void addBird(Bird bird) {
        this.birds.add(bird);
    }
    
    public void addProduct(PetProduct product) {
        this.products.add(product);
    }
    
    public String getName() {
        return this.name;
    }
    
    public String getLocation() {
        return this.location;
    }
    
    public List<Dog> getDogs() {
        return this.dogs;
    }
    
    public List<Cat> getCats() {
        return this.cats;
    }
    
    public List<Bird> getBirds() {
        return this.birds;
    }
    
    public List<PetProduct> getProducts() {
        return this.products;
    }
}