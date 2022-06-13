class Solution {
   public:
    int dfs(int i, int j, int n, vector<vector<int>>& triangle) {
        if (i == n) return 0;
        int lower_left = triangle[i][j] + dfs(i + 1, j, n, triangle);
        int lower_right = triangle[i][j] + dfs(i + 1, j + 1, n, triangle);
        return min(lower_left, lower_right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        return dfs(0, 0, n, triangle);
    }
};