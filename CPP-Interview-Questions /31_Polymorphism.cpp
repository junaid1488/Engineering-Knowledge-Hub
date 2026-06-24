// Author: Mohd Juned
// Language: C++
// Topic: Polymorphism
#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << x << endl;
    }

    void show(double x) {
        cout << x << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(10.5);
    return 0;
}
