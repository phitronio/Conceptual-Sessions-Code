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

    vector<vector<int>> mat(n+1, vector<int>(n+1));

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>mat[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    vector<vector<int>> adlist(n+1, vector<int>());

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if (mat[i][j] == 1) {
                adlist[i].push_back(j);
            }
        }
    }

    cout<<"------------------"<<endl;

    for(int i=0; i<=n; i++)
    {
        cout<<i<<": ";

        for(auto val : adlist[i]) 
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }



    
    return 0;
}