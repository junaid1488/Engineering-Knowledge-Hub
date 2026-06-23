#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called\n";
    }

    ~Demo() {
        cout << "Destructor Called\n";
    }
};

int main() {
    Demo d;

    return 0;
}
