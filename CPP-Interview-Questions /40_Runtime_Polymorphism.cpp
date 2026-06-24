// Author: Mohd Juned
// Language: C++
// Topic: Runtime Polymorphism
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Barking" << endl;
    }
};

int main() {
    Animal* ptr;
    Dog d;
    ptr = &d;
    ptr->sound();
    return 0;
}
