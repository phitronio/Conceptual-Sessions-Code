/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;

// top value to bottom value
map<long long int, bool> dp;

bool rec(long long int n)
{
    // base
    if (1 == n)
    {
        return true;
    }
    else if (0 == n)
    {
        return false;
    }

    // already calculated - provide dp
    if (dp.count(n))
    {
        return dp[n];
    }

    // recursive call
    bool res10div = false, res20div = false;
    if (n % 10 == 0)
        res10div = rec(n / 10);
    if (n % 20 == 0)
        res20div = rec(n / 20);

    // calculate dp
    dp[n] = res10div || res20div;
    return dp[n];
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        dp.clear(); // every test case dp value clear or make empty
        long long int n;
        cin >> n;
        bool res = rec(n);
        if (res == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}