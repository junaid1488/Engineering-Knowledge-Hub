#include <iostream>
using namespace std;

int main() {
    int x = 100;

    int* ptr = &x;

    cout << "Value: " << x << '\n';
    cout << "Address: " << ptr << '\n';
    cout << "Dereference: " << *ptr << '\n';

    *ptr = 200;

    cout << "Updated Value: " << x << '\n';

    return 0;
}
