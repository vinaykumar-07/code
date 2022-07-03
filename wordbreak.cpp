class Solution
{
public:
    void solve(string s, string ans, unordered_set<string> &st, vector<string> &dict)
    {
        if (s.length() <= 0)
        {
            ans.pop_back();
            dict.push_back(ans);
        }

        for (int i = 0; i < s.length(); i++)
        {
            string left = s.substr(0, i + 1);

            if (st.find(left) != st.end())
            {
                solve(s.substr(i + 1), ans + left + " ", st, dict);
            }
        }
    }

    vector<string> wordBreak(int n, vector<string> &dict, string s)
    {
        unordered_set<string> st;
        for (string str : dict)
            st.insert(str);

        dict.clear();
        solve(s, "", st, dict);

        return dict;
    }
};