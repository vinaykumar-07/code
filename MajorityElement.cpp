class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n = nums.size();
    int element;
    
    sort(nums.begin(), nums.end());   // Sort the vector to check for elements count in order 
    int x = n/2;

    element = nums[x];
    return element;

    }
};