#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev, *next;

    Node(int val) {
        data = val;
        prev = next = nullptr;
    }
};

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    Node* temp = head;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
