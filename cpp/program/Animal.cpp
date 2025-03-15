
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string species;
    string name;
public:
    Animal() {
    }

    Animal(string species, string name) {
        this->species = species;
        this->name = name;
    }

    void setSpecies(string species) {
        this->species = species;
    }

    void setName(string name) {
        this->name = name;
    }

    string getSpecies() {
        return this->species;
    }
    
    string getName() {
        return this->name;
    }

    ~Animal() {
    }
};