
#pragma once
#include <iostream>
#include <string>
#include "Food.cpp"
#include "Toy.cpp"

using namespace std;

class PetProduct : public Food, public Toy {
private:
    float price;
    int stockQuantity;
public:
    PetProduct() {
    }

    PetProduct(string brand, string type, string material, string targetAge, float price, int stockQuantity) 
        : Food(brand, type), Toy(material, targetAge) {
        this->price = price;
        this->stockQuantity = stockQuantity;
    }

    void setPrice(float price) {
        this->price = price;
    }

    void setStockQuantity(int stockQuantity) {
        this->stockQuantity = stockQuantity;
    }

    float getPrice() {
        return this->price;
    }

    int getStockQuantity() {
        return this->stockQuantity;
    }

    ~PetProduct() {
    }
};