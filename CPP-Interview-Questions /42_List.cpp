#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};

    l.push_front(5);
    l.push_back(40);

    cout << "Elements: ";
    for (int x : l)
        cout << x << " ";

    l.pop_front();
    l.pop_back();

    cout << "\nAfter Pop: ";
    for (int x : l)
        cout << x << " ";

    cout << "\nFront: " << l.front();
    cout << "\nBack: " << l.back();
    cout << "\nSize: " << l.size();

    return 0;
}
