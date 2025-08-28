// https://cses.fi/problemset/task/1666


#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


void dfs(int src, vector<vector<int>> &adlist,  vector<bool> &visited)
{
    visited[src] = true;

    for(auto child: adlist[src]) {
        if(visited[child] == false) {
            dfs(child, adlist, visited);
        }
    }
}

int main()
{
    fastIO();
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adlist(n+1);
    vector<bool> visited(n+1, false);

    while(m--)
    {
        int a, b;
        cin>>a>>b;

        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    
    vector<int> res;
    for(int i=1; i<=n; i++) {
        if(!visited[i]) {
            res.push_back(i);
            dfs(i, adlist, visited);
        }
    }

    int sz = res.size();

    cout<<sz-1<<endl;

    if (sz > 1) {
        for(int i=0; i<sz-1; i++) {
            cout<<res[i]<<" "<<res[i+1]<<endl;
        }
    }
    cout<<endl;
    
    return 0;
}
