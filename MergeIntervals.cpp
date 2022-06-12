bool sortcol(const vector<int> &v1, const vector<int> &v2) { return v1[0] < v2[0]; }
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        vector<vector<int>> res;
        if (!n)
            return res;
        sort(intervals.begin(), intervals.end(), sortcol);
        res.push_back(intervals[0]);
        for (int i = 1; i < n; i++)
        {
            if (res[res.size() - 1][1] < intervals[i][0])
                res.push_back(intervals[i]);
            else
                res[res.size() - 1][1] = max(res[res.size() - 1][1], intervals[i][1]);
        }
        return res;
    }
};