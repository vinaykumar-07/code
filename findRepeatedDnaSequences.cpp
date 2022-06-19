class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        int n = s.size();

        unordered_map<long long, int> st;
        vector<string> ans;

        if (n <= 10)
            return ans;

        long long p = 5;
        long long cmp = 0;
        int mod = 1e9 + 7;
        long long pr = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            cmp = ((cmp * p) % mod + (s[i] - 'A' + 1)) % mod;

            if (i + 10 >= n)
            {
                pr = (pr * p) % mod;
            }
            else
            {
                cmp = (cmp - ((s[i + 10] - 'A' + 1) * pr) % mod + mod) % mod;
            }

            if (st.find(cmp) != st.end() && st[cmp] == 1)
            {
                ans.push_back(s.substr(i, 10));
                st[cmp]++;
            }
            else
            {
                st[cmp]++;
            }
        }
        return ans;
    }
};