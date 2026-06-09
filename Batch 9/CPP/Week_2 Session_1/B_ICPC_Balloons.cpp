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

    string s;
    cin>>s;

    int freq[26] = {};

    int res = 0;
    for(int i=0; i<n; i++) {
        char ch = s[i];

        freq[ch - 'A']++;

        if (freq[ch - 'A'] > 1) {
            res++; 
        } else {
            res += 2;
        }
    }

    cout<<res<<endl;
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