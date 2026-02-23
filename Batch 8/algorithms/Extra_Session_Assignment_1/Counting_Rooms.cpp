#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isValid(int r, int c, int n, int m)
{
    if (r >=0 && r <n && c >= 0 && c <m) {
        return true;
    } else {
        return false;
    }
}

vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};

// vector<pair<int,int>> dir = {{0, 1}, {0, -1}, {1,0}, {-1,0}}; 

void dfs(int si, int sj, vector<vector<char>> &grid, vector<vector<bool>> &visited)
{
    visited[si][sj] = true;

    for(int i=0; i<4; i++) 
    {
        int ci = si + dx[i];
        int cj = sj + dy[i];

        if (isValid(ci, cj, grid.size(), grid[0].size()) && visited[ci][cj] == false && grid[ci][cj] == '.') {
            dfs(ci, cj, grid, visited);
        }
    }
}
int main()
{
    fastIO();
    int n, m;
    cin>>n>>m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for(int i=0; i <n; i++)
    {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    for(int i=0; i <n; i++)
    {
        for(int j=0; j<m; j++) {
            cout<<grid[i][j];
        }
        cout<<endl;
    }

    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (visited[i][j] == false && grid[i][j] == '.') {
                dfs(i,j,grid,visited);
                count++;
            }
        }
    }
    
    cout<<count<<endl;
    return 0;
}