// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution
{
public:
    string armstrongNumber(int n)
    {
        int t, r, sum = 0;
        t = n;
        while (n)
        {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        if (sum == t)
            return "Yes";
        else
            return "No";
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
// } Driver Code Ends