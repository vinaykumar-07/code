class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        map<vector<int>, vector<string>> m;

        for (int i = 0; i < strs.size(); i++)
        {
            vector<int> v(26, 0);
            for (int j = 0; j < strs[i].size(); j++)
            {
                v[strs[i][j] - 'a'] += 1;
            }
            m[v].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        map<vector<int>, vector<string>>::iterator it;

        for (it = m.begin(); it != m.end(); it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};