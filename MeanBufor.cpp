//
// Created by jakub on 14.10.2024.
//

#include "MeanBufor.h"

double MeanBufor::calculate() {
    int sum = 0;
    for(int i = 0; i < getSize(); i++) {
        sum += getTab(i);
    }
    double result = sum/getSize();
    return result;
}

MeanBufor::MeanBufor() : Bufor(){

}

MeanBufor::MeanBufor(int size) : Bufor(size) {

}
