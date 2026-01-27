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

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // sort(v.begin(), v.end(), greater<int>());

    // for(int i=0; i<n; i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    for(int i=n-1; i>=0; i-- )
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;






    
    
    return 0;
}