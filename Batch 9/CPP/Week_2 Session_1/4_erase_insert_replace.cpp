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
    
    // string s;
    // cin>>s;

    // cout<<s<<endl;

    // s.erase(3, 2);
    // cout<<s<<endl;

    // s.insert(3, "gr");

    // cout<<s<<endl;

    string s;
    cin>>s;
    cout<<s<<endl;

    s.insert(5, " ");
    cout<<s<<endl;

    s.replace(6, 5, "Earthhhh");
    cout<<s<<endl;

    int idx = s.find("Earr");

    if (idx != -1) {
        cout<<"Found"<<endl;
    } else {
        cout<<"Not found"<<endl;
    }

    
    return 0;
}