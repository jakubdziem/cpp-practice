//
// Created by student on 07.10.24.
//

#include "Dog.h"

#include <iostream>
#include <stdexcept>
#include <bits/locale_facets_nonio.h>

Dog::Dog(std::string name, int limbNr, bool protectedAnimal, std::string breed, int levelOfGuideSkills,
         int levelOfTrackerSkills) {
    this->limbNr = limbNr;
    this->name = name;
    this->protectedAnimal = protectedAnimal;
    this->breed = breed;
    this->levelOfGuideSkills = levelOfGuideSkills;
    this->levelOfTrackerSkills = levelOfTrackerSkills;
}

Dog::Dog() {
}

Dog::Dog(int limbNr, std::string name, bool protectedAnimal) : Animal(limbNr, name, protectedAnimal) {
}

void Dog::setSkillLevel(int type, int value) {
    if(value > 0 && value <= 10) {
        if(type == 0) {
            this->levelOfGuideSkills = value;
        } else if(type == 1) {
            this->levelOfTrackerSkills = value;
        } else {
            std::cout<<"Invalid Skill Type (0 = levelOfGuideSkills, 1 = levelOfTrackerSkills)";
        }
    } else {
        std::cout<<"Invalid Skill Level, level should be <1,10>";
    }
}

int Dog::getSkillLevel(int type) {
    if(type == 0) {
        return this->levelOfGuideSkills;
    } else if(type == 1) {
        return this->levelOfTrackerSkills;
    } else {
        std::cout<<"Invalid Skill Type (0 = levelOfGuideSkills, 1 = levelOfTrackerSkills)";
        return 0;
    }
}

void Dog::giveVoice() {
    std::cout<<"Hau hau";

}

void Dog::info() {
    std::cout << "LimbNr: " << limbNr << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "ProtectedAnimal: " << protectedAnimal << "\n";
    std::cout << "GuideSkillsLevel: " << levelOfGuideSkills << "\n";
    std::cout << "TrackerSkillsLevel: " << levelOfTrackerSkills << "\n";
    std::cout << "Breed: " << breed << "\n";
}

int Dog::howManyTrackerDogs(Dog *dogs, int nDogs) {
    int counter = 0;
    for(int i = 0; i < nDogs; i++) {
        if(dogs[i].levelOfTrackerSkills > dogs[i].levelOfGuideSkills) {
            counter++;
        }
    }
    return counter;
}


