#include <bits/stdc++.h>
using namespace std;

// arr[10]=true;
// arr[10]=false;

// map<long long int, bool> dp;

// bool rec(long long int init, long long int n)
// {
//     // base case
//     if (init == n)
//     {
//         return true;
//     }
//     else if (init > n)
//     {
//         return false;
//     }
//     // already calculated value check
//     if (dp.count(init) > 0)
//     {
//         return dp[init];
//     }
//     // recursion call
//     bool rec10 = rec(init * 10, n);
//     bool rec20 = rec(init * 20, n);
//     // your task
//     // new value calculate
//     dp[init] = (rec10 || rec20);
//     return dp[init];
// }

int main()
{
    int tc;
    cin >> tc;
    // tabulation calculation
    long long int max_n = 1000;
    // bool arr[max_n + 1];
    map<int, bool> arr;
    // for (int i = 1; i <= max_n; i++)
    // {
    //     arr[i] = false;
    // }

    arr[1] = true;
    for (int i = 1; i <= max_n; i++)
    {
        if (arr[i] == true)
        {
            if (i * 10 <= max_n)
            {
                arr[i * 10] = true;
            }
            if (i * 20 <= max_n)
            {
                arr[i * 20] = true;
            }
        }
    }

    while (tc--)
    {
        // dp.clear();
        long long int n;
        cin >> n;
        // long long int init = 1;
        // bool res = rec(1, n);
        if (arr.count(n) > 0)
        {
            if (arr[n] == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}