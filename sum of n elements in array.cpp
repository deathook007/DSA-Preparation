#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
   
    int sum(int arr[], int n)
    {
        int i, sum = 0;
        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        return sum;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends
