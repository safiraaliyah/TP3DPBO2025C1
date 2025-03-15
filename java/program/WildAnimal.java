
public class WildAnimal extends Animal {
    private String habitat;
    private boolean endangered;
    
    public WildAnimal() {
    }
    
    public WildAnimal(String species, String name, String habitat, boolean endangered) {
        super(species, name);
        this.habitat = habitat;
        this.endangered = endangered;
    }
    
    public void setHabitat(String habitat) {
        this.habitat = habitat;
    }
    
    public void setEndangered(boolean endangered) {
        this.endangered = endangered;
    }
    
    public String getHabitat() {
        return this.habitat;
    }
    
    public boolean isEndangered() {
        return this.endangered;
    }
}