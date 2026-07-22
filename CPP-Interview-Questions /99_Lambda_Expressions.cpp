
#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Object Created\n";
    }

    ~Demo() {
        cout << "Object Destroyed\n";
    }

    void show() {
        cout << "Using Smart Pointer\n";
    }
};

int main() {
    unique_ptr<Demo> ptr1 = make_unique<Demo>();
  

    if (auto temp = ptr4.lock())
        temp->show();

    return 0;
}
