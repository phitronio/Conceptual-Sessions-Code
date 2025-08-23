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
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }


    vector<vector<int>> adlist(n, vector<int>());
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (mat[i][j] == 1) {
                adlist[i].push_back(j);
            }
        }
    }


    for(int i=0; i<n; i++) {
        cout<<i<<" -> ";
        for(auto x : adlist[i]) {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> mat2(n, vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(auto val : adlist[i]) {
            mat2[i][val] = 1;
        }
    }

    cout<<"------------"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}