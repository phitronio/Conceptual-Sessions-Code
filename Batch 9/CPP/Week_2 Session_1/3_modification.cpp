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
    string s1, s2;
    cin>>s1>>s2;

    cout<<s1<<endl<<s2<<endl;

    // s1 = s1 + " " + s2;

    s1.append(s2);

    cout<<s1<<endl;

    s1.push_back('E');
    cout<<s1<<endl;

    s1.pop_back();
    cout<<s1<<endl;
    cout<<"------------"<<endl;

    cout<<s2<<endl;

    s2 = s1;
    cout<<s2<<endl;

    
    return 0;
}