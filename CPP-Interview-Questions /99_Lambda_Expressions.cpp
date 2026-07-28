#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {8, 3, 5, 1, 9};

    sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b;
    });

    cout << "Sorted Array: ";
    for_each(arr.begin(), arr.end(), [](int x) {
        cout << x << " ";
    });

    cout << endl;

    int a = 10, b = 20;

    auto sum = [=]() {
        return a + b;
    };

    cout << "Sum = " << sum() << endl;

    return 0;
}
