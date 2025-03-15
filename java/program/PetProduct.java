
public class PetProduct implements Food, Toy {
    private String brand;
    private String type;
    private String material;
    private String targetAge;
    private float price;
    private int stockQuantity;
    
    public PetProduct() {
    }
    
    public PetProduct(String brand, String type, String material, String targetAge, float price, int stockQuantity) {
        this.brand = brand;
        this.type = type;
        this.material = material;
        this.targetAge = targetAge;
        this.price = price;
        this.stockQuantity = stockQuantity;
    }
    
    @Override
    public void setBrand(String brand) {
        this.brand = brand;
    }
    
    @Override
    public void setType(String type) {
        this.type = type;
    }
    
    @Override
    public String getBrand() {
        return this.brand;
    }
    
    @Override
    public String getType() {
        return this.type;
    }
    
    @Override
    public void setMaterial(String material) {
        this.material = material;
    }
    
    @Override
    public void setTargetAge(String targetAge) {
        this.targetAge = targetAge;
    }
    
    @Override
    public String getMaterial() {
        return this.material;
    }
    
    @Override
    public String getTargetAge() {
        return this.targetAge;
    }
    
    public void setPrice(float price) {
        this.price = price;
    }
    
    public void setStockQuantity(int stockQuantity) {
        this.stockQuantity = stockQuantity;
    }
    
    public float getPrice() {
        return this.price;
    }
    
    public int getStockQuantity() {
        return this.stockQuantity;
    }
}