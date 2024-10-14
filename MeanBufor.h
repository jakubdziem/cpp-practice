//
// Created by jakub on 14.10.2024.
//

#ifndef MEANBUFOR_H
#define MEANBUFOR_H


#include "Bufor.h"

class MeanBufor : public Bufor {
public:
    double calculate() override;
    MeanBufor();
    MeanBufor(int size);
};


#endif //MEANBUFOR_H
