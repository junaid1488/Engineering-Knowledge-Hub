#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() 
};

int main() {

    if (auto temp = ptr4.lock())
        temp->show();

    return 0;
}
