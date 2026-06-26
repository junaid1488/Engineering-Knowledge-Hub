/*
File Name : 55_Queue_Implementation.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Queue Implementation
*/
#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = rear = 0;
    }

    void push(int x) {
        arr[rear++] = x;
    }

    void pop() {
        if (front < rear)
            front++;
    }

    int Front() {
        return arr[front];
    }

    bool empty() {
        return front == rear;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        cout << q.Front() << " ";
        q.pop();
    }

    return 0;
}
