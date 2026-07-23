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
 

    cout << "Shared Count: " << ptr2.use_count() << endl;

    weak_ptr<Demo> ptr4 = ptr2;

    if (auto temp = ptr4.lock())
        temp->show();

    return 0;
}
