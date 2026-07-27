#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {



    cout << endl;

    int a = 10, b = 20;

    auto add = [=]() {
        return a + b;
    };

    cout << "Sum: " << add();

    return 0;
}
