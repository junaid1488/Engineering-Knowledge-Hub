#include <iostream>
#include <memory>
using namespace std;

    shared_ptr<Student> ptr2 = make_shared<Student>();
    shared_ptr<Student> ptr3 = ptr2;

    cout << "Shared Pointer Count: " << ptr2.use_count() << endl;

    weak_ptr<Student> ptr4 = ptr2;

    if (auto temp = ptr4.lock()) {
        temp->display();
    }

    return 0;
}
