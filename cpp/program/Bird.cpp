
#pragma once
#include <iostream>
#include <string>
#include "Pet.cpp"

using namespace std;

class Bird : public Pet {
private:
    bool canFly;
    string beakType;
public:
    Bird() {
    }

    Bird(string species, string name, string owner, bool vaccinated, bool canFly, string beakType) 
        : Pet(species, name, owner, vaccinated) {
        this->canFly = canFly;
        this->beakType = beakType;
    }

    void setCanFly(bool canFly) {
        this->canFly = canFly;
    }

    void setBeakType(string beakType) {
        this->beakType = beakType;
    }

    bool getCanFly() {
        return this->canFly;
    }

    string getBeakType() {
        return this->beakType;
    }

    ~Bird() {
    }
};
