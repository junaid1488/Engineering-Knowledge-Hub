#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 1, 3};

    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a < b;
    });

    cout << "Sorted Elements: ";

    for_each(nums.begin(), nums.end(), [](int x) {
        cout << x << " ";
    });

    cout << endl;

    int a = 10, b = 20;

    auto add = [=]() {
        return a + b;
    };

    cout << "Sum: " << add();

    return 0;
}
