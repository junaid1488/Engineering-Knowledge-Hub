#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {10, 9, 2, 5, 3, 7, 101, 18};
    int n = a.size(), ans = 1;
    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);

    for (int x : dp) ans = max(ans, x);

    cout << "Length of LIS: " << ans;
    return 0;
}
