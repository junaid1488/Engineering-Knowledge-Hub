#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 90)
        cout << "A";
    else if (marks >= 75)
        cout << "B";
    else if (marks >= 60)
        cout << "C";
    else
        cout << "Fail";

    return 0;
}
