#include <iostream>
using namespace std;

void increment(int& x) {
    x++;
}

int main() {
    int num = 10;

    int& ref = num;

    increment(ref);

    cout << num << '\n';

    return 0;
}
