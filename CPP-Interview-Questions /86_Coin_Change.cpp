#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;

    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int coin : coins)
        for (int i = coin; i <= amount; i++)
            if (dp[i - coin] != INT_MAX)
                dp[i] = min(dp[i], dp[i - coin] + 1);

    cout << (dp[amount] == INT_MAX ? -1 : dp[amount]);
    return 0;
}
