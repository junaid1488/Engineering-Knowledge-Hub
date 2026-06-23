#include <iostream>
using namespace std;

#define PI 3.14159265358979323846
#define SQUARE(x) ((x) * (x))

int main() {
    double radius = 5.0;

    cout << "Area = " << PI * SQUARE(radius) << '\n';

    return 0;
}
