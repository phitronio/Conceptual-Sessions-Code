// https://lightoj.com/problem/commandos [BFS]
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
bool vis[100];
int node_to_src[100];
int node_to_dest[100];

void BFS(int src, int arr[])
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    // if(chk==1)
    //     node_to_src[src]=0;
    // else
    //     node_to_dest[src]=0;
    arr[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // parent print
        for (int child : adj[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                // if(chk==1)
                //     node_to_src[child]=node_to_src[par]+1;
                // else
                //     node_to_dest[child]=node_to_dest[par]+1;
                arr[child] = arr[par] + 1;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        int n, r;
        cin >> n >> r;
        while (r--)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int s, d;
        cin >> s >> d;
        memset(vis, false, sizeof(vis));
        memset(node_to_src, -1, sizeof(node_to_src));
        // BFS(s, 1);
        BFS(s, node_to_src);

        memset(vis, false, sizeof(vis));
        memset(node_to_dest, -1, sizeof(node_to_dest));
        // BFS(d, 2);
        BFS(d, node_to_dest);

        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val = node_to_src[i] + node_to_dest[i];
            ans = max(ans, val);
        }
        cout << "Case " << t << ": " << ans << endl;
        for (int i = 0; i < n; i++)
        {
            adj[i].clear();
        }
    }

    return 0;
}
