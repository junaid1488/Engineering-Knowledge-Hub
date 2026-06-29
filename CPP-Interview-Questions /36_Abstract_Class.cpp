#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark" << endl;
    }
};

int main() {
    Dog d;
    d.sound();
    return 0;
}
