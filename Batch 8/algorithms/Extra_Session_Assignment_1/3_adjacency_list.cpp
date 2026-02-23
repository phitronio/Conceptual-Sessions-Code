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

    vector<vector<int>> adlist(n, vector<int>());
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;

        adlist[a].push_back(b);
        adlist[b].push_back(a); // directed hole ei line kintu hobe na.
    }


   for(int i=0; i<n; i++)
   {
        cout<<i<<" -> ";
        for(auto x : adlist[i]) 
        {
            cout<<x<<" ";
        }
        cout<<endl;
   }

   cout<<"-------------"<<endl;

   cout<<adlist[2].size()<<endl;
   cout<<"-------------"<<endl;

   for(auto x : adlist[1]) {
    cout<<x<<" ";
   }
   cout<<endl;
    
    return 0;
}