//
// Created by student on 07.10.24.
//

#include "Cat.h"

#include <iostream>

Cat::Cat(int limbNr, std::string name, bool protectedAnimal) : Animal(limbNr, name, protectedAnimal) {

}

Cat::Cat() {
}

void Cat::initMice(int mice[5]) {
    for(int i = 0; i < 5; i++) {
        this->mice[i] = mice[i];
    }
}

void Cat::initCat(int levelOfMouseHunting, int mice[5]) {
    this->levelOfMouseHunting = levelOfMouseHunting;
    for(int i = 0; i < 5; i++) {
        this->mice[i] = mice[i];
    }
}

void Cat::setLevelOfMouseHunting(int value) {
    if(value > 0 && value <= 10) {
        this->levelOfMouseHunting = value;
    } else {
    }
}

int Cat::getLevelOfMouseHunting() {
    return this->levelOfMouseHunting;
}

int Cat::getMice(int index) {
    if(index >= 1 && index <= 5) {
        return this->mice[index - 1];
    }
    return 0;
}

void Cat::giveVoice() {
    std::cout << "Miau miau";
}

void Cat::info() {
    std::cout << "LimbNr: " << limbNr << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "ProtectedAnimal: " << protectedAnimal << "\n";
    for(int i = 1; i <= 5; i++) {
        std::cout << "Year: " << i << "Mice: " << mice[i-1] << "\n";
    }
    std::cout << "LevelOfMouseHunting" << levelOfMouseHunting;

}

void Cat::howManyCats(Cat *cats, int nCats) {
    for(int i = 0; i < nCats; i++) {
        int *mice = cats[i].mice;
        int sum = 0;
        for(int j = 0; j < 5; j++) {
            sum += mice[j];
        }
        std::cout << "Cat " << cats[i].getName() << " caught " << sum << " mice in total.\n";
    }
}
