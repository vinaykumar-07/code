class Solution
{
public:
    string multiply(string num1, string num2)
    {

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        if (num1.size() == 0 || num2.size() == 0)
            return 0;

        if (num1 == "0" || num2 == "0")
            return "0";

        int l1 = num1.size();
        int l2 = num2.size();
        vector<int> result(l1 + l2, 0);
        for (int i = 0; i < l1; i++)
        {
            int g = i;
            for (int j = 0; j < l2; j++)
            {
                int a = num1[i] - '0';
                int b = num2[j] - '0';
                result[i + j] = result[i + j] + a * b;
                if (result[i + j] > 9)
                {
                    int d = result[i + j] / 10;
                    result[i + j + 1] += d;
                    result[i + j] %= 10;
                }
            }
        }
        reverse(result.begin(), result.end());
        int i = 0;
        while (i < result.size() && result[i] == 0)
        {
            i++;
        }
        string s = "";
        while (i < result.size())
            s += to_string(result[i++]);
        return s;
    }
};