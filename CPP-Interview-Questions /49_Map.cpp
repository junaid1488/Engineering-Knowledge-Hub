/*
File Name : 49_Map.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Map (STL)
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[101] = "Alice";
    mp[102] = "Bob";
    mp[103] = "Charlie";

    for (auto it : mp)
        cout << it.first << " " << it.second << endl;

    return 0;
}
