
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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> a = {{1,3},{2,6},{8,10},{9,12}};

    sort(a.begin(), a.end());

    vector<vector<int>> ans;

    for (auto x : a) {
        if (ans.empty() || ans.back()[1] < x[0])
            ans.push_back(x);
        else
            ans.back()[1] = max(ans.back()[1], x[1]);
    }

    for (auto x : ans)
        cout << "[" << x[0] << "," << x[1] << "] ";

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};

    int sum = a[0], best = a[0];

    for (int i = 1; i < a.size(); i++) {
        sum = max(a[i], sum + a[i]);
        best = max(best, sum);
    }

    cout << "Maximum Subarray Sum: " << best;
    return 0;
}
