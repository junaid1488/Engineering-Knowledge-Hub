#include <iostream>
using namespace std;

enum Day {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    Day today = Wednesday;

    cout << today << '\n';

    return 0;
}
