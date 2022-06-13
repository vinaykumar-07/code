class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int k = 1;
        int end = n * n;
        vector<vector<int>> ans(n, vector<int>(n));
        int j = 0;
        while (k != end + 1)
        {
            for (int i = j; i < n - j; i++)
                ans[j][i] = k++;
            if (k == end + 1)
                return ans;
            for (int i = j + 1; i < n - j; i++)
                ans[i][n - 1 - j] = k++;
            if (k == end + 1)
                return ans;
            for (int i = n - 2 - j; i >= j; i--)
                ans[n - j - 1][i] = k++;
            if (k == end + 1)
                return ans;
            for (int i = n - 2 - j; i > j; i--)
                ans[i][j] = k++;
            if (k == end + 1)
                return ans;
            j++;
        }
        return ans;
    }
};