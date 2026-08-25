#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];

void dfs(int src)
{
    // cout << src << " ";
    vis[src] = true;
    for(int child : adj_list[src])
        if(!vis[child])
            dfs(child);
}

int main()
{
    int n,m;
    cin >> n >> m;
    while(m--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    
    int cnt = 0;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
            v.push_back(i);
            cnt++;
        }
    }
    cout << cnt-1 << endl; // total road needed
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" " <<v[i+1]<<endl;
    }
    
    return 0;
}
