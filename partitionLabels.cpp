class Solution {
public:
    vector<int> partitionLabels(string s) {
        map <char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]=i;
        }
        int maximum=0;
        int prev=-1;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            maximum=max(maximum,m[s[i]]);
            if(i==maximum){
                ans.push_back(maximum-prev);
                prev=maximum;
                maximum=m[s[i+1]];
            }
        }return ans;
    }
};