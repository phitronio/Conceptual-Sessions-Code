#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
bool dp[N];

// for // 10^5
// for // 10^3

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < N; i++)
    {
        dp[i] = false;
    }

    dp[1] = true;
    for (int i = 1; i < N; i++) // O(N) = 10^5
    {
        if (dp[i] == true)
        {
            if (i + 5 <= N)
                dp[i + 5] = true;
            if (i * 4 <= N)
                dp[i * 4] = true;
        }
    }

    while (tc) // 10^5
    {
        int n;
        cin >> n;

        if (dp[n]) 
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