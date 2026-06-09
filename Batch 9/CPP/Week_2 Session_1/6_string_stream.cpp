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
    // getline(cin, s);

    // stringstream ss(s);

    // string word;

    // while(ss >> word) 
    // {
    //     if (word == "phitron") {
    //         cout<<word<<endl;
    //     }
    // }
    

    string s;
    cin>>s;

    reverse(s.begin(), s.end()-1);
    cout<<s<<endl;

    sort(s.begin(), s.end());

    cout<<s<<endl;
    return 0;
}