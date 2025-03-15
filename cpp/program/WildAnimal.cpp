
#pragma once
#include <iostream>
#include <string>
#include "Animal.cpp"

using namespace std;

class WildAnimal : public Animal {
private:
    string habitat;
    bool endangered;
public:
    WildAnimal() {
    }

    WildAnimal(string species, string name, string habitat, bool endangered) : Animal(species, name) {
        this->habitat = habitat;
        this->endangered = endangered;
    }

    void setHabitat(string habitat) {
        this->habitat = habitat;
    }

    void setEndangered(bool endangered) {
        this->endangered = endangered;
    }

    string getHabitat() {
        return this->habitat;
    }

    bool isEndangered() {
        return this->endangered;
    }

    ~WildAnimal() {
    }
};
