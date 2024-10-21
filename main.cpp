#include <iostream>
#include "Array.h"
template<auto divider, typename T>
T showConvertingFromGrams(T elem) {
    return elem/divider;
}
//template<typename T>
//T minimum(T* tab, int n) {
//    T min = tab[0];
//    for(int i = 1; i < n; i++) {
//        if(tab[i] > tab[i-1]) {
//            min = tab[i];
//        }
//    }
//    return min;
//}

int main() {
//    int tab[3] = {1,2,3};
//    std::cout << minimum<int>(tab, 3) << std::endl;
//    Array arr = Array<int>();
//    arr.add(3);
//    arr.add(4);
//    arr.add(5);
//    arr.add(8);
//    arr.add(3);
//    arr.add(3);
//    arr.add(3);
//    arr.add(3);
//    arr.add(3);
//    arr.add(10);
//    arr.add(5);
//    arr.show();
//    arr.sort();
//    std::cout << arr.atIndex(4) << std::endl;
//    std::cout << arr.max() << std::endl;
//    Array<std::string> arrS = Array<std::string>(4);
//    arrS.add("abc");
//    arrS.add("ab");
//    arrS.add("12829");
//    arrS.add("Jakub Dziem");
//    arrS.sort();
//    std::cout << arrS.max();
    std::cout << showConvertingFromGrams<100,int>(1000) << std::endl;
    std::cout << showConvertingFromGrams<100,float>(100.7) << std::endl;
    std::cout << showConvertingFromGrams<100.1,float>(100.7) << std::endl;
    return 0;
}


// zad3 auto divider, typename T