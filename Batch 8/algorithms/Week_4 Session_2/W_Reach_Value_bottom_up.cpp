/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
// bottom value to top value
bool rec(long long int cur, long long int tar)
{
    // base
    if (cur == tar)
    {
        return true;
    }
    else if (cur > tar)
    {
        return false;
    }

    // recursive call
    bool res10mul = rec(cur * 10, tar);
    bool res20mul = rec(cur * 20, tar);
    return res10mul || res20mul;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n;
        cin >> n;
        bool res = rec(1, n);
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