#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {20, 30, 40};

    dq.push_front(10);
    dq.push_back(50);

    cout << "Elements: ";
    for (int x : dq)
        cout << x << " ";

    dq.pop_front();
    dq.pop_back();

    cout << "\nAfter Pop: ";
    for (int x : dq)
        cout << x << " ";

    cout << "\nFront: " << dq.front();
    cout << "\nBack: " << dq.back();
    cout << "\nSize: " << dq.size();

    return 0;
}
