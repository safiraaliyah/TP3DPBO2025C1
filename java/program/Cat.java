
public class Cat extends Pet {
    private String furColor;
    private boolean longHaired;
    
    public Cat() {
    }
    
    public Cat(String species, String name, String owner, boolean vaccinated, String furColor, boolean longHaired) {
        super(species, name, owner, vaccinated);
        this.furColor = furColor;
        this.longHaired = longHaired;
    }
    
    public void setFurColor(String furColor) {
        this.furColor = furColor;
    }
    
    public void setLongHaired(boolean longHaired) {
        this.longHaired = longHaired;
    }
    
    public String getFurColor() {
        return this.furColor;
    }
    
    public boolean isLongHaired() {
        return this.longHaired;
    }
}