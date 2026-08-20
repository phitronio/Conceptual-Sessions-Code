#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int cnt2 = 0;
void dfs(int si, int sj)
{
    cnt2++;
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '*')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int cnt = 0;
    vector<int> vv;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && vis[i][j] == false)
            {
                cnt++;

                cnt2 = 0;
                // dfs call
                dfs(i, j);
                // cout << cnt2 << endl;
                vv.push_back(cnt2);
            }
        }
    }
    cout << "Total separate city = " << cnt << endl;
    cout << "Single city total road point: ";
    for (int a : vv)
    {
        cout << a << endl;
    }
    return 0;
}