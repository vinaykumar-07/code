class Solution
{
public:
    string longestPalindrome(string s)
    {
        int half = 0, total = 0, index = 0;

        for (int i = 0; i < s.length(); i++)
        {
            int a = i - 1;
            int b = i + 1;
            int count = 0;

            while (a >= 0 && b < s.length() && s[a] == s[b])
            {
                count++;
                a--;
                b++;
            }

            if (count * 2 + 1 > total)
            {
                half = count;
                total = half * 2 + 1;
                index = i;
            }

            a = i - 1;
            b = i;
            count = 0;

            while (a >= 0 && b < s.length() && s[a] == s[b])
            {
                count++;
                a--;
                b++;
            }

            if (count * 2 > total)
            {
                half = count;
                total = half * 2;
                index = i;
            }
        }

        string result;
        if (half == 0)
            result = s[0];
        else
            result = s.substr(index - half, total);

        return result;
    }
};