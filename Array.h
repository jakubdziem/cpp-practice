//
// Created by jakub on 21.10.2024.
//

#ifndef DZIEM_JAKUB_5_3_LAB2_ZAD3_ARRAY_H
#define DZIEM_JAKUB_5_3_LAB2_ZAD3_ARRAY_H

#include <string>
#include <algorithm>
#include <iostream>
template<typename T>
class Array {
private:
    T* arr;
    int maxN;
    int firstFreeSpace;
public:
    Array(int n);
    Array();
    ~Array();
    void sort();
    T max();
    void show();
    void add(T arg);
    T atIndex(int index);
};

template<typename T>
Array<T>::Array(int n) {
    firstFreeSpace = 0;
    maxN = n;
    arr = new T[n];
}

template<typename T>
Array<T>::Array() {
    maxN = 10;
    arr = new T[10];
    firstFreeSpace = 0;
}

template<typename T>
Array<T>::~Array() {
    delete arr;
}

template<typename T>
void Array<T>::sort() {
    for (int i = 0; i < maxN; i++)
        for (int j = 1; j < maxN - i; j++)
            if (arr[j - 1] > arr[j])
                std::swap(arr[j - 1], arr[j]);
    std::cout << "Posortowana tablica:" << std::endl;
    for(int i = 0; i < maxN; i++) {
        if(i != maxN - 1) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i] << std::endl;
        }

    }
}

template<typename T>
T Array<T>::max() {
    T max = arr[0];
    for(int i = 1; i < maxN; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template<typename T>
void Array<T>::show() {
    for(int i = 0; i < maxN; i++) {
        if(i != maxN - 1) {
            std::cout << arr[i] << ", ";
        }
        else {
            std::cout << arr[i] << std::endl;
        }

    }
}

template<typename T>
void Array<T>::add(T arg) {
    if(firstFreeSpace < maxN) {
        arr[firstFreeSpace] = arg;
        firstFreeSpace++;
    }
    else
        std::cout << "W tablicy nie ma juz miejsca" << std::endl;
}

template<typename T>
T Array<T>::atIndex(int index) {
    if(index > 0 && index < maxN) {
        return arr[index];
    }
}
template<>
void Array<std::string>::sort() {
    for (int i = 0; i < maxN; i++)
        for (int j = 1; j < maxN - i; j++)
            if (arr[j - 1].length() > arr[j].length())
                std::swap(arr[j - 1], arr[j]);
    std::cout << "Posortowana tablica:" << std::endl;
    for(int i = 0; i < maxN; i++) {
        if(i != maxN - 1) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i] << std::endl;
        }

    }
}
template<>
std::string Array<std::string>::max() {
    std::string max = arr[0];
    for(int i = 1; i < maxN; i++) {
        if(arr[i].length() > max.length()) {
            max = arr[i];
        }
    }
    return max;
}
#endif //DZIEM_JAKUB_5_3_LAB2_ZAD3_ARRAY_H
