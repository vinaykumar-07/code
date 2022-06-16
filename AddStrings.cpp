class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string res;
        int i = num1.size() - 1, j = num2.size() - 1;
        char c = 0;
        while (i >= 0 && j >= 0)
        {
            char s1 = num1[i] - '0', s2 = num2[j] - '0';
            if (s1 + s2 + c <= 9)
            {
                char s = s1 + s2 + c + '0';
                res.push_back(s);
                c = 0;
            }
            else if (s1 + s2 + c > 9)
            {
                char s = s1 + s2 + c - 10 + '0';
                res.push_back(s);
                c = 1;
            }
            i--;
            j--;
        }
        while (i >= 0)
        {
            char s = num1[i] - '0' + c;
            if (s <= 9)
            {
                res.push_back(s + '0');
                c = 0;
            }
            else
            {
                res.push_back(s - 10 + '0');
                c = 1;
            }
            i--;
        }
        while (j >= 0)
        {
            char s = num2[j] - '0' + c;
            if (s <= 9)
            {
                res.push_back(s + '0');
                c = 0;
            }
            else
            {
                res.push_back(s - 10 + '0');
                c = 1;
            }
            j--;
        }
        if (c == 1)
            res.push_back(49);
        reverse(res.begin(), res.end());
        return res;
    }
};