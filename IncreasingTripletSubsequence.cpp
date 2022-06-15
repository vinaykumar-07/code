class Solution
{
public:
    bool increasingTriplet(vector<int> &v)
    {
        int n = v.size();
        int i;

        vector<int> pre(n, 0), suff(n, 0);
        pre[0] = v[0];
        for (i = 1; i < n; i++)
        {
            pre[i] = min(pre[i - 1], v[i]);
        }
        suff[n - 1] = v[n - 1];
        for (i = n - 2; i >= 0; i--)
        {
            suff[i] = max(suff[i + 1], v[i]);
        }

        for (i = 1; i < n - 1; i++)
        {
            if (v[i] > pre[i - 1] && v[i] < suff[i + 1])
            {
                return true;
            }
        }

        return false;
    }
};