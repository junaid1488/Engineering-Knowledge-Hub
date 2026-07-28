#include <iostream>
#include <utility>
using namespace std;

class Demo {
    int* data;


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
