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
    // int x = 10;

    // cout<<x<<endl;
    // cout<<&x<<endl;

    // *(&x) = 20;

    // cout<<*(&x)<<endl;

    int x = 10;

    int * ptr;
    ptr = &x;

    cout<<"x: "<<&x<<endl;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    cout<<"ptr: "<<&ptr<<endl;

    
    return 0;
}