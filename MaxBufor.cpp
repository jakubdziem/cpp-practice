//
// Created by jakub on 14.10.2024.
//

#include "MaxBufor.h"

double MaxBufor::calculate() {
    int max = 0;
    for(int i = 0; i < getSize(); i++) {
        if(getTab(i) > max) {
            max = getTab(i);
        }
    }
    return max;
}

void MaxBufor::add(int value) {
    if(getIndex()<getSize()) {
        Bufor::add(value);
        setFirst(getIndex()+1);
    }
}

MaxBufor::MaxBufor() : Bufor() {

}

MaxBufor::MaxBufor(int size) : Bufor(size) {

}
