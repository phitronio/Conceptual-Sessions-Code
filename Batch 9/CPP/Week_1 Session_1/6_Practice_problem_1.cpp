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

int * get_array(int n)
{
    int *arr = new int[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    return arr;
}
int main()
{
    fastIO();
    int n;
    cin>>n;

    int *mrr = get_array(n);

    for(int i=0; i<n; i++) {
        cout<<mrr[i]<<" ";
    }


    
    return 0;
}