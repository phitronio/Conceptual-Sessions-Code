#include <bits/stdc++.h>
using namespace std;
// char grid[8][8];
// bool vis[8][8];
// int level[8][8];
char grid[123][123];
bool vis[123][123];
int level[123][123];
vector<pair<int, int>> d = {{1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}};
int n = 122, m = 57;

bool valid(int i, int j)
{
    if (i < 97 || i >= n || j < 48 || j >= m)
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

        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        // cin >> n >> m;

        // for (int i = 0; i < n; i++)
        //     for (int j = 0; j < m; j++)
        //         cin >> grid[i][j];

        string src, des;
        cin >> src >> des;

        int si, sj, di, dj;
        // cin >> si >> sj >> di >> dj;
        // si = src[0] - 'a';
        // sj = src[1] - '1';
        // di = des[0] - 'a';
        // dj = des[1] - '1';
        si = src[0];
        sj = src[1];
        di = des[0];
        dj = des[1];

        // cout << si << sj << " " << di << dj << endl;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(si, sj);
        // cout << vis[di][dj] << endl;
        cout << level[di][dj] << endl;
    }

    return 0;
}