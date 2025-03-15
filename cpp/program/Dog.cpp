
#pragma once
#include <iostream>
#include <string>
#include "Pet.cpp"

using namespace std;

class Dog : public Pet {
private:
    string breed;
    float weight;
public:
    Dog() {
    }

    Dog(string species, string name, string owner, bool vaccinated, string breed, float weight) 
        : Pet(species, name, owner, vaccinated) {
        this->breed = breed;
        this->weight = weight;
    }

    void setBreed(string breed) {
        this->breed = breed;
    }

    void setWeight(float weight) {
        this->weight = weight;
    }

    string getBreed() {
        return this->breed;
    }

    float getWeight() {
        return this->weight;
    }

    ~Dog() {
    }
};