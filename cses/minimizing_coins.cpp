#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);

    for (int &v : coins)
        cin >> v;
    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    cout << (dp[x] == 1e9 ? -1 : dp[x]) << "\n";
}
