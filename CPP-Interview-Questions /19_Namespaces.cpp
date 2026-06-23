#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    std::cout << Math::add(10, 20) << '\n';

    return 0;
}
