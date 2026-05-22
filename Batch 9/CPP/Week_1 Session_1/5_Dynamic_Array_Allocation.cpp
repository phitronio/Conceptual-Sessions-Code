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

int * fun()
{
    // int arr[3] = {10, 20, 30};
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout<<"fun "<<endl;
    for(int i=0; i<3; i++) {
        cout<<arr[i]<<" ";
    }

    return arr;
}
int main()
{
    fastIO();
    
    int * mptr = fun();
    cout<<"mptr: "<<mptr<<endl;

    cout<<"main: "<<endl;
    for(int i=0; i<3; i++) {
        cout<<mptr[i]<<" ";
    }
    return 0;
}