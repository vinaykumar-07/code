class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        if (n == 1)
            return;
        for (int a = 0; a < n / 2; a++)
        {
            int start = a, end = n - a - 1;
            for (int i = start; i < end; i++)
            {
                swap(matrix[start][i], matrix[i][end]);
                swap(matrix[start][i], matrix[end][n - i - 1]);
                swap(matrix[start][i], matrix[n - i - 1][start]);
            }
        }
    }
};