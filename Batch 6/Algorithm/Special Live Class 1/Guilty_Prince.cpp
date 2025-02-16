// https://lightoj.com/problem/guilty-prince [DFS]
#include <bits/stdc++.h>
using namespace std;

char arr[20][20];
bool vis[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;
int cnt;
bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}

void DFS(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && arr[ci][cj] == '.')
        {
            DFS(ci, cj);
        }
    }
}

int main()
{
    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        cin >> m >> n;
        int si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        cnt = 0;
        DFS(si, sj);
        cout << "Case " << t << ": " << cnt << endl;
    }
}
