#include <bits/stdc++.h>
using namespace std;

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

    // recursive call
    bool l = false, r = false;
    if (n % 10 == 0)
        l = rec(n / 10);
    if (n % 20 == 0)
        r = rec(n / 20);

    return l || r;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
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