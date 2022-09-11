class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        // to store ans
        long long ans = 0;
        
        // to maintain top k-1 sum
        priority_queue <int,vector <int>,greater <int>> pq;
        
        // sorting in decreasing order of efficiency
        vector <pair<int,int>> v;
        for(int i=0;i<n;i++) v.push_back({efficiency[i],speed[i]});
        sort(v.rbegin(),v.rend());
        
        // running top k-1 sum
        long long topksum =0;
        for(int i=0;i<n;i++){
            // ith is the min for values from 1 to i-1
            int cur_min = v[i].first;
            
            // finding best sum, note here topksum is actually sum of top k-1
            long long speed_sum = 1LL*v[i].second + topksum;
            
            // updaing answer
            ans = max(ans,1LL*speed_sum*cur_min);
            pq.push(v[i].second);
            
            // updating topksum
            topksum+=1LL*v[i].second;
            if(pq.size()>k-1) {
                topksum -=1LL*pq.top();
                pq.pop();
            }
        }
        // finally taking mod
        int mod = 1000000007;
        ans%=mod;
        return ans;  
    }
};