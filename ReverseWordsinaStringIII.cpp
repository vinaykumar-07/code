class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        while(j<n){
            while(j<n && s[j]!=' ') j++;
            reverse(s.begin()+i,s.begin()+j);
            i = j+1;
            j = i;  
        }
        return s;
    }
};