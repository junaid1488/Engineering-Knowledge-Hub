#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        cin >> a >> b;

        if (b == 0)
            throw runtime_error("Division by zero");

        cout << a / b << '\n';
    }
    catch (const exception& e) {
        cout << e.what() << '\n';
    }

    return 0;
}
