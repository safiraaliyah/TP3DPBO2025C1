
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Food {
private:
    string brand;
    string type;
public:
    Food() {
    }

    Food(string brand, string type) {
        this->brand = brand;
        this->type = type;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    void setType(string type) {
        this->type = type;
    }

    string getBrand() {
        return this->brand;
    }

    string getType() {
        return this->type;
    }

    ~Food() {
    }
};