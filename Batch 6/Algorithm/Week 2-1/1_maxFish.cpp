class Solution
{
public:
    int n, m;

    int dfs(vector<vector<int>> &grid, int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0)
            return 0;
        int sum = grid[i][j];
        grid[i][j] = 0;
        sum += dfs(grid, i + 1, j);
        sum += dfs(grid, i - 1, j);
        sum += dfs(grid, i, j + 1);
        sum += dfs(grid, i, j - 1);
        return sum;
    }

    int findMaxFish(vector<vector<int>> &grid)
    {
        m = grid[0].size();
        n = grid.size();
        int mxFish = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j])
                {

                    int totalFish = dfs(grid, i, j);
                    mxFish = max(mxFish, totalFish);
                }
            }
        }

        return mxFish;
    }
};