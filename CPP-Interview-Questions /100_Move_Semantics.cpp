#include <iostream>
#include <utility>
using namespace std;

class Demo {
    int* data;

public:


    void display() {
        if (data)
            cout << "Value: " << *data << endl;
        else
            cout << "No Data\n";
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo obj1(100);

    Demo obj2 = std::move(obj1);
    obj2.display();

    Demo obj3(200);
    obj3 = std::move(obj2);
    obj3.display();

    obj1.display();
    obj2.display();

    return 0;
}
