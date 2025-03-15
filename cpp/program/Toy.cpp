
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Toy {
private:
    string material;
    string targetAge;
public:
    Toy() {
    }

    Toy(string material, string targetAge) {
        this->material = material;
        this->targetAge = targetAge;
    }

    void setMaterial(string material) {
        this->material = material;
    }

    void setTargetAge(string targetAge) {
        this->targetAge = targetAge;
    }

    string getMaterial() {
        return this->material;
    }

    string getTargetAge() {
        return this->targetAge;
    }

    ~Toy() {
    }
};