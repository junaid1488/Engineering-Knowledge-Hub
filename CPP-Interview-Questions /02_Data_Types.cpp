#include <iostream>
using namespace std;

int main() {
    int a = 10;
    long long b = 10000000000LL;
    float c = 10.5f;
    double d = 20.123456;
    char e = 'J';
    bool f = true;

    cout << sizeof(a) << '\n';
    cout << sizeof(b) << '\n';
    cout << sizeof(c) << '\n';
    cout << sizeof(d) << '\n';
    cout << sizeof(e) << '\n';
    cout << sizeof(f) << '\n';

    return 0;
}
