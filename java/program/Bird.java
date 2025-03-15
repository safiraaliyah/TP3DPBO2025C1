
public class Bird extends Pet {
    private boolean canFly;
    private String beakType;
    
    public Bird() {
    }
    
    public Bird(String species, String name, String owner, boolean vaccinated, boolean canFly, String beakType) {
        super(species, name, owner, vaccinated);
        this.canFly = canFly;
        this.beakType = beakType;
    }
    
    public void setCanFly(boolean canFly) {
        this.canFly = canFly;
    }
    
    public void setBeakType(String beakType) {
        this.beakType = beakType;
    }
    
    public boolean canFly() {
        return this.canFly;
    }
    
    public String getBeakType() {
        return this.beakType;
    }
}