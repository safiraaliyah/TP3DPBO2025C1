
#pragma once
#include <iostream>
#include <string>
#include "Animal.cpp"

using namespace std;

class Pet : public Animal {
private:
    string owner;
    bool vaccinated;
public:
    Pet() {
    }

    Pet(string species, string name, string owner, bool vaccinated) : Animal(species, name) {
        this->owner = owner;
        this->vaccinated = vaccinated;
    }

    void setOwner(string owner) {
        this->owner = owner;
    }

    void setVaccinated(bool vaccinated) {
        this->vaccinated = vaccinated;
    }

    string getOwner() {
        return this->owner;
    }

    bool isVaccinated() {
        return this->vaccinated;
    }

    ~Pet() {
    }
};