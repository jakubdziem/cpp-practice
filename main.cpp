#include <iostream>

#include "Animal.h"
#include "Dog.h"

int main() {
    Animal* animal = new Animal();
    animal->info();
    Dog* dog = new Dog("dalmantynczyk", 5, 4);
    dog->info();



    return 0;
}
