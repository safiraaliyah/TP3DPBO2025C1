
public class Pet extends Animal {
    private String owner;
    private boolean vaccinated;
    
    public Pet() {
    }
    
    public Pet(String species, String name, String owner, boolean vaccinated) {
        super(species, name);
        this.owner = owner;
        this.vaccinated = vaccinated;
    }
    
    public void setOwner(String owner) {
        this.owner = owner;
    }
    
    public void setVaccinated(boolean vaccinated) {
        this.vaccinated = vaccinated;
    }
    
    public String getOwner() {
        return this.owner;
    }
    
    public boolean isVaccinated() {
        return this.vaccinated;
    }
}