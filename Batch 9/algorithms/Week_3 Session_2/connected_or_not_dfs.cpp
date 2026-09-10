#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void dfs(int src)
{
    vis[src] = true;
    for (int child : adj_list[src])
        if (!vis[child])
            dfs(child);
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(4);
    // int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            // dfs(i);
            // cnt++;
            // not conected
            cout << "All nodes are not connected" << endl;
            return 0;
        }
    }
    cout << "All nodes are connected" << endl;
    // cout << cnt << endl;
    return 0;
}