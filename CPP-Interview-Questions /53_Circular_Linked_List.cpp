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
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = first;

    Node* temp = first;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != first);

    return 0;
}
