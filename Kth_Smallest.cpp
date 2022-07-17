#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k)
    {

        sort(arr, arr + r + 1);
        return arr[k - 1];
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        Solution ob;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }

        cout << ob.kthSmallest(arr, 0, n, k) << endl;
    }
    return 0;
}