
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

    weak_ptr<Demo> ptr4 = ptr2;

    if (auto temp = ptr4.lock())
        temp->show();

    return 0;
}
