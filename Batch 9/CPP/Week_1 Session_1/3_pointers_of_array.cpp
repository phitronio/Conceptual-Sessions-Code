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
    int arr[3] = {10, 20, 30};

    cout<<arr[0]<<endl;
    cout<<*(&arr[0])<<endl;
    cout<<arr<<endl;

    cout<<*arr<<endl;
    cout<<&arr<<endl;
    
    return 0;
}