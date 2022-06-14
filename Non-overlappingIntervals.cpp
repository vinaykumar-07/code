class Solution {
public:
    static bool cmp(vector<int>& v1, vector<int>& v2){
        return v1[1]<v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),cmp);
        int start=0;
        int res=1;
        for(int i=1;i<n;i++){
            if(nums[start][1]<=nums[i][0]){
                start=i;
                res++;
            }
        }
        return n-res;
    }
};