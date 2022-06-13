class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ans = {1};
        for (int i = 1; i <= rowIndex; i++)
        {
            int end = ans.size() - 1;
            while (end > 0)
            {
                ans[end] += ans[end - 1];
                end--;
            }
            ans.push_back(1);
        }
        return ans;
    }
};