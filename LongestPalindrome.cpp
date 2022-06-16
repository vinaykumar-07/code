class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> freq;
        for (char x : s)
            freq[x]++;

        int ans = 0;
        int flag = 0;

        for (auto ele : freq)
        {
            if (ele.second == 1 || ele.second % 2)
                flag = 1;
            if (ele.second > 1)
                ans += (int(ele.second / 2) * 2);
        }

        return ans + flag;
    }
};