#include <bits/stdc++.h>
using namespace std;

char graph[1001][1001];
bool vis[1001][1001];

vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int row, col;

bool valid(int x, int y)
{
    if (x < 0 || x >= row || y < 0 || y >= col)
    {
        return false;
    }
    else
        return true;
}

int cnt;

void dfs(int sr, int sc)
{

    vis[sr][sc] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int child_row = sr + direction[i].first;
        int child_col = sc + direction[i].second;

        if (valid(child_row, child_col) && vis[child_row][child_col] == false && graph[child_row][child_col] == '.')
        {
            dfs(child_row, child_col);
        }
    }
}

int main()
{

    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> graph[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int max_size = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (graph[i][j] == '.')
            {

                if (!vis[i][j])
                {
                    cnt = 0; // resetting

                    dfs(i, j);
                    if (max_size < cnt)
                    {
                        max_size = cnt;
                    }
                }
            }
        }
    }

    cout << max_size << endl;
}