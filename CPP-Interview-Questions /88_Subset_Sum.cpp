#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int sum = 9, n = arr.size();

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= sum; j++)
            dp[i][j] = (arr[i - 1] <= j)
                ? dp[i - 1][j] || dp[i - 1][j - arr[i - 1]]
                : dp[i - 1][j];

    cout << (dp[n][sum] ? "Subset Exists" : "Subset Does Not Exist");
    return 0;
}
