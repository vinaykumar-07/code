class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        stringstream ss(s);
        map<char, string> m;
        map<char, int> m1;
        map<string, char> m2;
        string word;
        int i = 0;
        int count = 0;
        while (ss >> word)
        {
            if (m1[pattern[i]] != 0 && m[pattern[i]] != word)
                return false;
            if (m2[word] != 0 && m2[word] != pattern[i])
                return false;
            m[pattern[i]] = word;
            m1[pattern[i]]++;
            m2[word] = pattern[i];
            i++;
            count++;
        }
        if (count != pattern.size())
            return false;

        return true;
    }
};