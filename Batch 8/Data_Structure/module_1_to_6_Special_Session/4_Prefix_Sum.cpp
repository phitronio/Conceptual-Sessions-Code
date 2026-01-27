#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int main()
{
    fastIO();
    int n; 
    cin>>n;

    vector<int> v(n+1);

    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<=n; i++) {
        cout<<v[i]<<" ";
    }

    // vector<int> v(n);
    // for(int i=0; i<n; i++) {
    //     cin>>v[i];
    // }

    // for(int i=0; i<n; i++) {
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

    // vector<int> pre(n);

    // pre[0] = v[0];

    // for(int i=1; i<n; i++) {
    //     pre[i] = pre[i-1] + v[i];
    // }

    // for(int i=0; i<n; i++) {
    //     cout<<pre[i]<<" ";
    // }

    // cout<<endl;
    
    return 0;
}