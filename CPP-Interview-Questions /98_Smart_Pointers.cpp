
#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo(
    ~Demo() {
        cout << "Object Destroyed\n";
    }

    weak_ptr<Demo> ptr4 = ptr2
