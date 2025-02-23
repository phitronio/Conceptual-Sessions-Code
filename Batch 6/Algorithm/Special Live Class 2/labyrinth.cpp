#include <bits/stdc++.h>
using namespace std;

char grid[1001][1001];
bool vis[1001][1001];
int dist[1001][1001];
pair<int, int> parent[1001][1001];

int n, m;

vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j)
{

    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
        return true;
}

void bfs(int si, int sj)
{

    vis[si][sj] = true;
    dist[si][sj] = 0;
    parent[si][sj] = {-1, -1};

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + dir[i].first;
            int cj = par_j + dir[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == 'A' || grid[ci][cj] == '.' || grid[ci][cj] == 'B'))
            {

                vis[ci][cj] = true;
                q.push({ci, cj});
                dist[ci][cj] = dist[par_i][par_j] + 1;
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
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            { // source
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'B')
            { // destination
                di = i;
                dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dist, 0, sizeof(dist));

    bfs(si, sj);

    if (vis[di][dj])
    {

        cout << "YES" << endl;
        cout << dist[di][dj] << endl;

        int c_i = di, c_j = dj; // shurute B te

        vector<char> path;

        while (1)
        {
            if (grid[c_i][c_j] == 'A')
            {
                break;
            }

            pair<int, int> par = parent[c_i][c_j]; // pair

            int p_i = par.first, p_j = par.second;

            if (p_i - c_i == 1 && p_j - c_j == 0)
            {
                path.push_back('U');
            }
            if (p_i - c_i == -1 && p_j - c_j == 0)
            {
                path.push_back('D');
            }
            if (p_i - c_i == 0 && p_j - c_j == -1)
            {
                path.push_back('R');
            }
            if (p_i - c_i == 0 && p_j - c_j == 1)
            {
                path.push_back('L');
            }
            c_i = p_i;
            c_j = p_j;
        }

        reverse(path.begin(), path.end());

        for (auto it : path)
        {
            cout << it;
        }
        cout << endl;
    }
    else
        cout << "NO" << endl;
}