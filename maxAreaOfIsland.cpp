class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxArea = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 1)
                    maxArea = max(maxArea, dfs(grid, i, j));
            }
        }
        return maxArea;
    }
    int dfs(vector<vector<int>> &grid, int i, int j)
    {
        if (i < 0 || j < 0 || j >= grid[0].size() || i >= grid.size() || grid[i][j] <= 0)
            return 0;
        int total = 0;
        // marking the current element as -1 so that we don't consider it again
        grid[i][j] = -1;
        int up = dfs(grid, i - 1, j);
        int down = dfs(grid, i + 1, j);
        int right = dfs(grid, i, j + 1);
        int left = dfs(grid, i, j - 1);
        total = 1 + left + right + up + down;
        return total;
    }
};