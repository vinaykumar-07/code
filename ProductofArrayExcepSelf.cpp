class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        int pro = 1;
        int c0 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                pro *= nums[i];
            if (nums[i] == 0)
                c0++;
        }
        for (int i = 0; i < n; i++)
        {
            if (c0 > 1)
            {
                nums[i] = 0;
            }
            else if (c0 == 1 && nums[i] == 0)
            {
                nums[i] = pro;
            }
            else if (c0 == 1 && nums[i] != 0)
            {
                nums[i] = 0;
            }
            else
            {
                nums[i] = pro / nums[i];
            }
        }
        return nums;
    }
};