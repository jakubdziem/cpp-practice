//
// Created by student on 14.10.24.
//

#ifndef BUFOR_H
#define BUFOR_H



class Bufor {
    private:
    int *array;
    int size;
    int firstFreeSpace;
public:
    Bufor();
    virtual ~Bufor();
    Bufor(int size);
    virtual void add(int value);
    virtual double calculate() = 0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void setFirst(int value);
    void setTab(int pos, int value);
    void showTab();
};



#endif //BUFOR_H
