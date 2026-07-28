#include <iostream>
#include <utility>
using namespace std;

class Demo {
    int* data;

public:
    Demo(int value) {
        data = new int(value);
        cout << "Constructor Called\n";
    }

    Demo(Demo&& obj) {
        data = obj.data;
        obj.data = nullptr;
        cout << "Move Constructor Called\n";
    }

    Demo& operator=(Demo&& obj) {
        if (this != &obj) {
            delete data;
            data = obj.data;
            obj.data = nullptr;
        }
        cout << "Move Assignment Operator Called\n";
        return *this;
    }

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


    return 0;
}
