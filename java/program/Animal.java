
public class Animal {
    private String species;
    private String name;
    
    public Animal() {
    }
    
    public Animal(String species, String name) {
        this.species = species;
        this.name = name;
    }
    
    public void setSpecies(String species) {
        this.species = species;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public String getSpecies() {
        return this.species;
    }
    
    public String getName() {
        return this.name;
    }
}