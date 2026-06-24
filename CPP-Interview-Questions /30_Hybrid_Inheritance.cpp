// Author: Mohd Juned
// Language: C++
// Topic: Hybrid Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base Class" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.show();
    return 0;
}
