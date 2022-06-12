class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {

        int n = nums.size();
        int l = 0;
        int r = n - 1;
        vector<int> sol(n);
        for (int i = n - 1; i >= 0; i--)
        {
            int sqL = nums[l] * nums[l];
            int sqR = nums[r] * nums[r];
            if (sqL > sqR)
            {
                sol[i] = sqL;
                l++;
            }
            else
            {
                sol[i] = sqR;
                r--;
            }
        }
        return sol;
    }
};