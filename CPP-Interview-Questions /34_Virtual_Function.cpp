// Author: Mohd Juned
// Language: C++
// Topic: Virtual Function
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base Class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived Class" << endl;
    }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}
