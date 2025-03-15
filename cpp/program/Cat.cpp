
#pragma once
#include <iostream>
#include <string>
#include "Pet.cpp"

using namespace std;

class Cat : public Pet {
private:
    string furColor;
    bool longHaired;
public:
    Cat() {
    }

    Cat(string species, string name, string owner, bool vaccinated, string furColor, bool longHaired) 
        : Pet(species, name, owner, vaccinated) {
        this->furColor = furColor;
        this->longHaired = longHaired;
    }

    void setFurColor(string furColor) {
        this->furColor = furColor;
    }

    void setLongHaired(bool longHaired) {
        this->longHaired = longHaired;
    }

    string getFurColor() {
        return this->furColor;
    }

    bool isLongHaired() {
        return this->longHaired;
    }

    ~Cat() {
    }
};