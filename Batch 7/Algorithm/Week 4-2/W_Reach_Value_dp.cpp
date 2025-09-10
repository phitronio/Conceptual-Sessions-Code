#include <bits/stdc++.h>
using namespace std;

int dp[100000];
bool rec(long long int n)
{
    // base case
    if (1 == n)
    {
        return true;
    }
    else if (n == 0)
    {
        return false;
    }

    // dp - already calculated
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // recursive call
    bool l = false, r = false;
    if (n % 10 == 0)
        l = rec(n / 10);
    if (n % 20 == 0)
        r = rec(n / 20);

    dp[n] = l || r; // calculate
    return dp[n];
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        memset(dp, -1, sizeof(dp)); // -1 assign - default value
        long long int n;
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}