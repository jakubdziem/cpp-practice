//
// Created by jakub on 14.10.2024.
//

#ifndef MAXBUFOR_H
#define MAXBUFOR_H


#include "Bufor.h"

class MaxBufor : public Bufor{
public:
    double calculate() override;
    void add(int value) override;
    MaxBufor();
    MaxBufor(int size);
};


#endif //MAXBUFOR_H
