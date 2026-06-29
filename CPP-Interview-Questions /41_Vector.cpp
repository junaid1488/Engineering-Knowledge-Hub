#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Elements: ";
    for (int x : v)
        cout << x << " ";

    cout << "\nSize: " << v.size();

    v.push_back(60);
    cout << "\nAfter Push: ";
    for (int x : v)
        cout << x << " ";

    v.pop_back();
    cout << "\nAfter Pop: ";
    for (int x : v)
        cout << x << " ";

    cout << "\nFront: " << v.front();
    cout << "\nBack: " << v.back();

    return 0;
}
