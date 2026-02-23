#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int main()
{
    fastIO();
    int n, m;

    cin>>n>>m;

    vector<vector<int>> mat(n, vector<int>(n, 0));

    for(int i=0; i<n; i++) {
        mat[i][i] = 1;
    }

    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;

        mat[a][b] = 1;
        mat[b][a] = 1; // directed graph hole ei line hobe na.
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    if (mat[3][0] == 1) {
        cout<<"connected"<<endl;
    } else {
        cout<<"not connected"<<endl;
    }

    
    return 0;
}