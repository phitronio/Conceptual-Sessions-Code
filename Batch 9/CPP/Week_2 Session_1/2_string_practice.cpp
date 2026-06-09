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
    getline(cin, s);

    int ln = s.size();

    cout<<ln<<endl;

    for(int i=0; i<ln; i++)
    {
        cout<<s[i]<<" ";
    }   
    cout<<endl; 

    for(auto c : s) {
        cout<<c<<" ";
    }
    return 0;
}