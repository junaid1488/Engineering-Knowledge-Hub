#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top();

    st.pop();

    cout << "\nAfter Pop, Top: " << st.top();
    cout << "\nSize: " << st.size();

    cout << "\nElements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
