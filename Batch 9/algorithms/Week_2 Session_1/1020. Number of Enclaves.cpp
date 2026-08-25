class Solution {
public:
    bool vis[505][505];

    vector<pair<int, int>> d = {
        {-1, 0},
        {1, 0},
        {0, -1},
        {0, 1}
    };

    int n, m;

    bool valid(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;

        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++) {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;

            if (valid(ci, cj) &&
                !vis[ci][cj] &&
                grid[ci][cj] == 1) {
                
                dfs(ci, cj, grid);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size();        // rows
        m = grid[0].size();     // columns

        memset(vis, false, sizeof(vis));

        // Start DFS from all boundary land cells
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) &&
                    grid[i][j] == 1 &&
                    !vis[i][j]) {

                    dfs(i, j, grid);
                }
            }
        }

        // Count land cells that cannot reach boundary
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};
