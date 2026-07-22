#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() {


int main() {
    unique_ptr<Demo> ptr1 = make_unique<Demo>();
    ptr1->show();

    shared_ptr<Demo> ptr2 = make_shared<Demo>();
    shared_ptr<Demo> ptr3 = ptr2;

    cout << "Shared Count: " << ptr2.use_count() << endl;

    weak_ptr<Demo> ptr4 = ptr2;

    if (auto temp = ptr4.lock())
        temp->show();

    return 0;
}
