#include <bits/stdc++.h>
using namespace std;

long long int n;
bool rec(long long int val)
{
    // base case
    if (val == n)
    {
        return true;
    }
    else if (val > n)
    {
        return false;
    }

    // recursive call
    bool l = rec(val * 10);
    bool r = rec(val * 20);

    return l || r;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(1))
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