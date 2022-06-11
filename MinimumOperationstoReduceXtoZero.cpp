class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        unordered_map<int, int> mapLeft;
        int n = nums.size();
        int ans = INT_MAX;

        for (int i = 0, prefixSum = 0; i < n; i++)
        {
            prefixSum += nums[i];
            mapLeft[prefixSum] = i + 1;
            if (prefixSum == x)
                ans = min(ans, i + 1);
        }

        for (int i = n - 1, suffixSum = 0; i >= 0; i--)
        {
            suffixSum += nums[i];
            if (suffixSum == x)
                ans = min(ans, n - i);
            if (mapLeft[x - suffixSum] > 0 && i + 1 > mapLeft[x - suffixSum]) // if i + 1 <= mapLeft => both prefix sum and suffix sum have same elements
                ans = min(ans, n - i + mapLeft[x - suffixSum]);               // n - i is size suffix sum, mapLeft[x - suffixSum] is size prefix sum
        }

        return ans == INT_MAX ? -1 : ans;
    }
};