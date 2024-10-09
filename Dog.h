//
// Created by student on 07.10.24.
//

#ifndef DOG_H
#define DOG_H
#include "Animal.h"


class Dog : public Animal{
private:
    std::string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
public:
    Dog(std::string name, int limbNr, bool protectedAnimal,std::string breed, int levelOfGuideSkills, int levelOfTrackerSkills);
    Dog();
    Dog(int limbNr, std::string name, bool protectedAnimal);
    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
    void info();
    static int howManyTrackerDogs(Dog* dogs, int nDogs);
};




#endif //DOG_H
