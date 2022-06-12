class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int start = 0;
        int mid = 0;
        int end = nums.size() - 1;
        // condition till mid<=end;
        while (mid <= end)
        {
            switch (nums[mid])
            {
                // for 0;
            case 0:
                swap(nums[start++], nums[mid++]);
                break;

                // for 1;
            case 1:
                mid++;
                break;

                // for 2 ;
            case 2:
                swap(nums[mid], nums[end--]);
                break;
            }
        }
    }
};