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


        cout << "Move Assignment Operator Called\n";
        return *this;
    }



    ~Demo() {
        delete data;
    }
};

int main() {


    return 0;
}
