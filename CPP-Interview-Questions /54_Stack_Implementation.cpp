/*
File Name : 54_Stack_Implementation.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Stack Implementation
*/
#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        arr[++top] = x;
    }

    void pop() {
        if (top >= 0)
            top--;
    }

    int peek() {
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        cout << s.peek() << " ";
        s.pop();
    }

    return 0;
}
