//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    string is_palindrome(int n)
    {
        int r = 0, t;
        t = n;
        if (n == 0)
            return "Yes";
        else
        {
            while (n)
            {
                r = r * 10 + (n % 10);
                n = n / 10;
            }
            if (r == t)
                return "Yes";
            else
                return "No";
        }
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        string ans = ob.is_palindrome(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends