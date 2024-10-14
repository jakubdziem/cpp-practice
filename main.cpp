#include <iostream>
#include <vector>
#include "Bufor.h"
#include "MeanBufor.h"
#include "MaxBufor.h"



int main() {
    Bufor* bufor1 = new MeanBufor(10);
    Bufor* bufor2 = new MaxBufor(5);

    bufor1->add(5);
    bufor1->add(10);
    bufor1->add(15);

    bufor2->add(3);
    bufor2->add(7);
    bufor2->add(2);
    bufor2->add(8);
    bufor2->add(6);
    bufor2->add(9);

    std::cout << "Tablica MeanBufor: ";
    bufor1->showTab();
    std::cout << "Srednia: " << bufor1->calculate() << std::endl;

    std::cout << "Tablica MaxBufor: ";
    bufor2->showTab();
    std::cout << "Maksymalna wartosc: " << bufor2->calculate() << std::endl;

    delete bufor1;
    delete bufor2;

    return 0;
}
