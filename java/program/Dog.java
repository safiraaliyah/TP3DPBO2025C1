
public class Dog extends Pet {
    private String breed;
    private float weight;
    
    public Dog() {
    }
    
    public Dog(String species, String name, String owner, boolean vaccinated, String breed, float weight) {
        super(species, name, owner, vaccinated);
        this.breed = breed;
        this.weight = weight;
    }
    
    public void setBreed(String breed) {
        this.breed = breed;
    }
    
    public void setWeight(float weight) {
        this.weight = weight;
    }
    
    public String getBreed() {
        return this.breed;
    }
    
    public float getWeight() {
        return this.weight;
    }
}