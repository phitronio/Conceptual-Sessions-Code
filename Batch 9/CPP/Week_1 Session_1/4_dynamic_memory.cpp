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

// issue with static memory 
// int * fun()
// {
//     int x = 10;

//     int *ptr = &x;

//     cout<<"fun: "<<*ptr<<endl;
//     cout<<"fun: "<<ptr<<endl;

//     // return &x;
//     return ptr;
// }

int *abc()
{
    int * x = new int (10);
    cout<<"abc: "<<*x<<endl;

    return x;
}

int main()
{
    fastIO();
    
    int * mptr = abc();


    cout<<"main: "<<*mptr<<endl;
    
    return 0;
}