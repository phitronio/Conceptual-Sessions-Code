#include <bits/stdc++.h>
using namespace std;
// vector<int> adj_list[1005];
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                // parent[ci][cj] = par;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << vis[i][j];
    //     }
    //     cout << endl;
    // }

    if (vis[di][dj] == 0)
    {
        cout << "Can not reach destination!!!" << endl;
        cout << "So, we can not print path!!!" << endl;
    }
    else
    {
        cout << level[di][dj] << endl;
        int dr = di, dc = dj;
        while (1)
        {
            pair<int, int> par = parent[dr][dc];
            // cout << dr << " " << dc << endl;
            dr = par.first;
            dc = par.second;
            if (dr == -1 && dc == -1)
            {
                break;
            }
            if (grid[dr][dc] != 'A')
            {
                grid[dr][dc] = '0';
            }
        }

        // grid print
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }

    // vector<int> path;
    // int node = dst;
    // while (node != -1)
    // {
    //     path.push_back(node);
    //     node = parent[node];
    // }
    // reverse(path.begin(), path.end());
    // for (int x : path)
    // {
    //     cout << x << " ";
    // }

    return 0;
}