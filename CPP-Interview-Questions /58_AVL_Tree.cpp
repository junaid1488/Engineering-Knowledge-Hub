/*
File Name : 58_AVL_Tree.cpp
Author    : Mohd Juned
Language  : C++
Topic     : AVL Tree
*/
#include <iostream>
using namespace std;

struct Node {
    int key, height;
    Node *left, *right;
    Node(int k) : key(k), height(1), left(nullptr), right(nullptr) {}
};

int h(Node* n) { return n ? n->height : 0; }
int bal(Node* n) { return h(n->left) - h(n->right); }

Node* rightRotate(Node* y) {
    Node* x = y->left;
    y->left = x->right;
    x->right = y;
    y->height = max(h(y->left), h(y->right)) + 1;
    x->height = max(h(x->left), h(x->right)) + 1;
    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    x->right = y->left;
    y->left = x;
    x->height = max(h(x->left), h(x->right)) + 1;
    y->height = max(h(y->left), h(y->right)) + 1;
    return y;
}

Node* insert(Node* root, int key) {
    if (!root) return new Node(key);

    if (key < root->key) root->left = insert(root->left, key);
    else if (key > root->key) root->right = insert(root->right, key);
    else return root;

    root->height = max(h(root->left), h(root->right)) + 1;
    int b = bal(root);

    if (b > 1 && key < root->left->key) return rightRotate(root);
    if (b < -1 && key > root->right->key) return leftRotate(root);
    if (b > 1 && key > root->left->key) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (b < -1 && key < root->right->key) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    for (int x : {10, 20, 30, 40, 50, 25})
        root = insert(root, x);

    inorder(root);
}
