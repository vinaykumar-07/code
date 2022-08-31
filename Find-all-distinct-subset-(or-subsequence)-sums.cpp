vector<int> DistinctSum(vector<int> nums)
{
    int n = nums.size();
    int sum = 0;
    for (auto x : nums)
    {
        sum += x;
    }
    int dp[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
            {
                dp[i][j] = false;
            }
            if (j == 0)
            {
                dp[i][j] = true;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (nums[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    vector<int> ans;
    for (int i = 0; i <= sum; i++)
    {
        if (dp[n][i] == true)
        {
            ans.push_back(i);
        }
    }
    return ans;
}