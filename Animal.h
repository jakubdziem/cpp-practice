//
// Created by student on 07.10.24.
//

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>


class Animal {
public:
    int limbNr;
    std::string name;
    bool protectedAnimal;
    Animal();
    Animal(int limbNr, std::string name, bool protectedAnimal = true);
    int getLimbNr();
    std::string getName();
    bool getProtectedAnimal();
    void setLimbNr(int limbNr);
    void setName(std::string name);
    void setProtectedAnimal(bool protectedAnimal1);
    void giveVoice();
    void info();
    static int howManyProtectedAnimals(Animal* animals, int nAnimals);
};
#endif //ANIMAL_H
