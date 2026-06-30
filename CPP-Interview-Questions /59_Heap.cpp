#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> heap;

    for (int x : {40, 20, 50, 10, 30})
        heap.push(x);

    while (!heap.empty()) {
        cout << heap.top() << " ";
        heap.pop();
    }
}
