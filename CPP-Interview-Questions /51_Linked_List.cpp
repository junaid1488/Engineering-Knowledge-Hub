/*
File Name : 51_Linked_List.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Singly Linked List
*/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Node* temp = head;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
