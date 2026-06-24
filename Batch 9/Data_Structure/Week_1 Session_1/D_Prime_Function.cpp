#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

void solve()
{
    int n;
    cin>>n;

    bool flag = 1;
    for(int i=2; i*i<=n; i++)
    {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (n == 1) {
        cout<<"NO"<<endl;
    } else {
        if (flag == 1) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    fastIO();
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}

// problem link: https://codeforces.com/group/MWSDmqgszm/contest/223205/problem/D
