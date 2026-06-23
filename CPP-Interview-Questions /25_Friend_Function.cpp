#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    friend void display(Number n);
};

void display(Number n) {
    cout << n.value << '\n';
}

int main() {
    Number n(100);

    display(n);

    return 0;
}
