
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "MCMXCIV";
    unordered_map<char, int> val = {
        {'I',1}, {'V',5}, {'X',10}, {'L',50},
        {'C',100}, {'D',500}, {'M',1000}
    };

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
        ans += (i + 1 < s.size() && val[s[i]] < val[s[i + 1]])
              ? -val[s[i]] : val[s[i]];

    cout << "Integer: " << ans;
    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s = "{[()]}";
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{')
            st.push(c);
        else {
            if (st.empty() ||
                (c == ')' && st.top() != '(') ||
                (c == ']' && st.top() != '[') ||
                (c == '}' && st.top() != '{'))
                return cout << "Invalid", 0;
            st.pop();
        }
    }

    cout << (st.empty() ? "Valid" : "Invalid");
    return 0;
}
