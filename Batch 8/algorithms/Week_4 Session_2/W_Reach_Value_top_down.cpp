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

    // recursive call
    bool res10div = false, res20div = false;
    if (n % 10 == 0)
        res10div = rec(n / 10);
    if (n % 20 == 0)
        res20div = rec(n / 20);

    return res10div || res20div;
}


int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
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