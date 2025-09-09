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

void recur(int n)
{
    if (n < 1) return;
    cout<<n<<" ";
    recur(n-1);
}
int main()
{
    fastIO();
    int n;
    cin>>n;

    recur(n);
    
    return 0;
}