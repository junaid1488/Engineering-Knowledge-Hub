/*
File Name : 45_Queue_STL.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Queue (STL)
*/
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop();

    cout << "After Pop Front: " << q.front() << endl;

    cout << "Size: " << q.size() << endl;

    return 0;
}
