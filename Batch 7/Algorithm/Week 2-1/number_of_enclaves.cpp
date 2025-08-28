// https://leetcode.com/problems/number-of-enclaves/description/

class Solution {
public:
    bool visited[505][505];
    bool isValid(int i, int j, int n, int m) {
        return (i>=0 && i<n && j>=0 && j <m);
    }

    vector<pair<int,int>> direc = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    void dfs(int si, int sj, vector<vector<int>>& grid) {
        visited[si][sj] = true;

        for(auto p : direc) {
            int ci = si + p.first;
            int cj = sj + p.second;

            if (isValid(ci, cj, grid.size(), grid[0].size()) && grid[ci][cj] && !visited[ci][cj] ) {
                dfs(ci, cj, grid);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if (i == 0 || j == 0 || i == n-1 || j == m-1) {
                    if (!visited[i][j] && grid[i][j]) {
                        dfs(i, j, grid);
                    }
                }
            }
        }

        int cnt = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if (grid[i][j] && !visited[i][j]) cnt++;
            }
        }

        return cnt;


    }
};