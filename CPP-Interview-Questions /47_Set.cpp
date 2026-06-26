/*
File Name : 47_Set.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Set (STL)
*/
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    for (int x : s)
        cout << x << " ";

    return 0;
}
