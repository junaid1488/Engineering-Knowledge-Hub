#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = price.size();

    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            dp[i] = max(dp[i], price[j - 1] + dp[i - j]);

    cout << "Maximum Profit: " << dp[n];
    return 0;
}
