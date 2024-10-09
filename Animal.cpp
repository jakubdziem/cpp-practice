//
// Created by student on 07.10.24.
//

#include "Animal.h"

#include <iostream>

Animal::Animal(): limbNr(0), protectedAnimal(false) {
}

Animal::Animal(int limbNr, std::string name, bool protectedAnimal) {
    this->limbNr = limbNr;
    this->name = name;
    this->protectedAnimal = protectedAnimal;
}

int Animal::getLimbNr() {
    return limbNr;
}

std::string Animal::getName() {
    return name;
}

bool Animal::getProtectedAnimal() {
    return protectedAnimal;
}

void Animal::setLimbNr(int limbNr) {
    this->limbNr = limbNr;
}

void Animal::setName(std::string name) {
    this->name = name;
}

void Animal::setProtectedAnimal(bool protectedAnimal) {
    this->protectedAnimal = protectedAnimal;
}

void Animal::giveVoice() {
    std::cout << "Chrum, miau, hau, piiiii";
}

void Animal::info() {
    std::cout << "LimbNr: " << limbNr << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "ProtectedAnimal: " << protectedAnimal << "\n";
}

int Animal::howManyProtectedAnimals(Animal* animals, int nAnimals) {
    int count = 0;
    for (int i = 0; i < nAnimals; i++) {
        if (animals[i].protectedAnimal) {
            count++;
        }
    }
    return count;
}

