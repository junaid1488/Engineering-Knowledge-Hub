/*
File Name : 50_Unordered_Map.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Unordered Map (STL)
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> ump;

    ump[1] = "Apple";
    ump[2] = "Banana";
    ump[3] = "Mango";

    for (auto it : ump)
        cout << it.first << " " << it.second << endl;

    return 0;
}
