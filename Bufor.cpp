//
// Created by student on 14.10.24.
//

#include <iostream>
#include "Bufor.h"

Bufor::Bufor() {
    array = new int[10];
    firstFreeSpace = 0;
    std::fill(array, array + size, 0);
}

Bufor::~Bufor() {
    delete []array;
}

Bufor::Bufor(int size) {
    this->size = size;
    array = new int[size];
    firstFreeSpace = 0;
    std::fill(array, array + size, 0);
}

void Bufor::add(int value) {
    array[firstFreeSpace] = value;
    firstFreeSpace++;
}

int Bufor::getIndex() {
    return firstFreeSpace;
}

int Bufor::getSize() {
    return size;
}

int Bufor::getTab(int i) {
    return array[i];
}

int Bufor::getFirst() {
    return firstFreeSpace;
}

void Bufor::setFirst(int value) {
    array[firstFreeSpace] = value;
}

void Bufor::setTab(int pos, int value) {
    array[pos] = value;
}

void Bufor::showTab() {
    for(int i = 0; i < size; i++) {
        std::cout << i << ": " << array[i] << std::endl;
    }
}
