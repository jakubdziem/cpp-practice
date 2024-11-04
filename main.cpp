#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
pair<int, int> func(vector<int> vector1) {
    set<int> set1;
    pair<int, int> pair1;
    int sum = 0;
    for(auto el : vector1) {
        if(set1.contains(el)) {
            pair1.first = el;
        } else {
            set1.insert(el);
            sum += el;
        }
    }
    pair1.second = sum;
    return pair1;
}
template<typename T>
set<T> checking(vector<T> vector1, vector<T> vector2) {
    set<T> s1 (vector1.begin(), vector1.end());
    set<T> s2 (vector2.begin(), vector2.end());
    set<T> s1diff;
    set<T> s2diff;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s1diff,s1diff.begin()));
    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(s2diff, s2diff.begin()));
    //insert_iterator
    //inserter
    return s1diff.set_union(s2diff);
}
int main() {
    vector<int> vector1 = {1, 2, 3, 4, 5, 5, 0, 11};
    vector<int> vector2 = {1, 2, 3, 4, 5, 5, 9, 10};
    checking(vector1, vector2);
    pair<int, int> ab = func(vector1);
    cout << ab.first << endl;
    cout << ab.second << endl;
    return 0;
}

