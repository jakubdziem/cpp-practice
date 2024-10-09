//
// Created by student on 07.10.24.
//

#ifndef CAT_H
#define CAT_H
#include "Animal.h"


class Cat : public Animal{
private:
    int levelOfMouseHunting;
    int mice[5];
public:
    Cat(int limbNr, std::string name, bool protectedAnimal);
    Cat();
    void initMice(int mice[5]);
    void initCat(int levelOfMouseHunting, int mice[5]);
    void setLevelOfMouseHunting(int value);
    int getLevelOfMouseHunting();
    int getMice(int index);
    void giveVoice();
    void info();
    static void howManyCats(Cat* cats, int nCats);
};



#endif //CAT_H
