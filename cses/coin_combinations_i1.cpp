#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int m = 1e9 + 7;
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int &v : coins)
        cin >> v;

    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
            {
                (dp[i] += (dp[i - coins[j]])) %= m;
            }
        }
    }
    cout << dp[x] << endl;
}