#include <bits/stdc++.h>
using namespace std;

bool rec(long long init, long long int n)
{
    // base case
    if (init == n)
    {
        return true;
    }
    else if (init > n)
    {
        return false;
    }
    // recursion call
    bool rec10 = rec(init * 10, n);
    bool rec20 = rec(init * 20, n);
    // your task
    return rec10 || rec20;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n;
        cin >> n;
        long long int init = 1;
        bool res = rec(1, n);
        if (res == true)
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