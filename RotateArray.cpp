class Solution
{
    void swap(int &a, int &b)
    {
        int c = a;
        a = b;
        b = c;
    }
    void rotate(vector<int> &arr, int start, int end)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++, end--;
        }
    }

public:
    void rotate(vector<int> &arr, int k)
    {
        int n = arr.size();
        // this is if k > n then we can simply do k%=n;
        k %= n;
        k = n - k;
        // first we need to rotate the array from 0 to k-1;
        rotate(arr, 0, k - 1);
        // second we need to rotate array from k to n;
        rotate(arr, k, n - 1);
        // last we need to rotate the whole array;
        rotate(arr, 0, n - 1);
    }
};