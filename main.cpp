#include <iostream>

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
    Animal *animal = new Animal();
    animal->info();
    Dog dogs[] = {
            Dog("Buddy", 4, false, "Golden Retriever", 2, 3),
            Dog("Max", 4, false, "Beagle", 1, 0),
            Dog("Rocky", 4, true, "German Shepherd", 3, 5),
    };
    dogs[0].info();
    std::cout << Dog::howManyTrackerDogs(dogs, 3) << std::endl;
    std::cout << Animal::howManyProtectedAnimals(dogs, 3) << std::endl;


    int mice1[5] = {1, 2, 3, 4, 5};
    int mice2[5] = {0, 1, 0, 0, 0};
    int mice3[5] = {0, 0, 0, 0, 0};

    Cat cats[] = {
            Cat(4, "Whiskers", true),
            Cat(4, "Tom", false),
            Cat(4, "Shadow", true)
    };

    cats[0].initMice(mice1);
    cats[1].initMice(mice2);
    cats[2].initMice(mice3);

    Cat::howManyCats(cats, 3);
}
