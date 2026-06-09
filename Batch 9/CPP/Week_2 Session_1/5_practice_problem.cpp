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

int main()
{
    fastIO();
    string s;
    cin>>s;

    cout<<s<<endl;

    int idx = s.find("X");

    if (idx != -1) {
        s.replace(idx, 1, " ");
    }

    

    cout<<s<<endl;
    
    return 0;
}