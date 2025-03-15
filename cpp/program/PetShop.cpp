
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Dog.cpp"
#include "Cat.cpp"
#include "Bird.cpp"
#include "PetProduct.cpp"

using namespace std;

class PetShop {
private:
    string name;
    string location;
    vector<Dog> dogs;
    vector<Cat> cats;
    vector<Bird> birds;
    vector<PetProduct> products;
public:
    PetShop() {
    }

    PetShop(string name, string location, vector<Dog> dogs, vector<Cat> cats, vector<Bird> birds, vector<PetProduct> products) {
        this->name = name;
        this->location = location;
        this->dogs = dogs;
        this->cats = cats;
        this->birds = birds;
        this->products = products;
    }

    void setName(string name) {
        this->name = name;
    }

    void setLocation(string location) {
        this->location = location;
    }

    void setDogs(vector<Dog> dogs) {
        this->dogs = dogs;
    }

    void setCats(vector<Cat> cats) {
        this->cats = cats;
    }

    void setBirds(vector<Bird> birds) {
        this->birds = birds;
    }

    void setProducts(vector<PetProduct> products) {
        this->products = products;
    }

    void addDog(Dog dog) {
        this->dogs.push_back(dog);
    }

    void addCat(Cat cat) {
        this->cats.push_back(cat);
    }

    void addBird(Bird bird) {
        this->birds.push_back(bird);
    }

    void addProduct(PetProduct product) {
        this->products.push_back(product);
    }

    string getName() {
        return this->name;
    }

    string getLocation() {
        return this->location;
    }

    vector<Dog> getDogs() {
        return this->dogs;
    }

    vector<Cat> getCats() {
        return this->cats;
    }

    vector<Bird> getBirds() {
        return this->birds;
    }

    vector<PetProduct> getProducts() {
        return this->products;
    }

    ~PetShop() {
    }
};