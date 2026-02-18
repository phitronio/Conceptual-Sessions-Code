class Solution {
public:
    bool visited[501][501];

    bool isValid(int i, int j, int n, int m) {
        if (i >=0 && i <n && j >=0 && j <m) {
            return true;
        } else {
            return false;
        }
    }

    vector<pair<int,int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    void dfs(int si, int sj, vector<vector<int>>& grid) {
        visited[si][sj] = true;

        for(auto p : dir) {
            int ci = si + p.first;
            int cj = sj + p.second;

            if ( isValid(ci, cj, grid.size(), grid[0].size()) && visited[ci][cj] == false && grid[ci][cj] ) {
                dfs(ci, cj, grid);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();


        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                    if (!visited[i][j] && grid[i][j] == 1) {
                        dfs(i, j, grid);
                    }
                }
            }
        }

        int cnt = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if (!visited[i][j] && grid[i][j]) cnt++;
            }
        }

        return cnt;
    

    }
};
