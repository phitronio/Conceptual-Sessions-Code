#include <bits/stdc++.h>
using namespace std;
// vector<int> adj_list[1005];
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{1, 0}, {0, -1}, {0, 1}, {-1, 0}};
int row, col;

bool valid(int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= col)
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
        int pi = par.first;
        int pj = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[pi][pj] + 1;
                parent[ci][cj] = {pi, pj};
            }
        }
    }
}

int main()
{

    cin >> row >> col;

    int si, sj, di, dj;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
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
    }

    // cout << si << sj << " " << di << dj;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(si, sj);
    // cout << vis[di][dj] << endl;

    cout << "minimum cost -> " << level[di][dj] << endl;

    if (vis[di][dj] == true)
    {
        int node_i = di, node_j = dj;
        while (1)
        {
            pair<int, int> par = parent[node_i][node_j];
            node_i = par.first;
            node_j = par.second;
            if (grid[node_i][node_j] == 'A')
            {
                break;
            }
            grid[node_i][node_j] = 'O';
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Destination not visited" << endl;
    }

    return 0;
}


/* 

input:
5 5
A....
.###.
.###.
.###.
....B

*/