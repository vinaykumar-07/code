class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        int n = nums.size();
        vector<vector<int>> v;

        // Sorting
        sort(nums.begin(), nums.end());
        for (int k = 0; k < n - 2; k++)
        {
            // Skipping Duplicates
            if (k != 0 && nums[k] == nums[k - 1])
            {
                continue;
            }

            int i = k + 1, j = n - 1;
            while (i < j && nums[j] >= 0)
            {
                int temp = nums[k] + nums[i] + nums[j];

                if (temp < 0)
                {
                    i++;
                }
                else if (temp > 0)
                {
                    j--;
                }
                else
                {
                    v.push_back({nums[i++], nums[k], nums[j--]});

                    // Skipping Duplicates
                    while (i < j && nums[i] == nums[i - 1])
                    {
                        i++;
                    }
                    while (i < j && nums[j] == nums[j + 1])
                    {
                        j--;
                    }
                }
            }
        }
        return v;
    }
};
