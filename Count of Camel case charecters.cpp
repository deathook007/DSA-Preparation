#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int countCamelCase(string s)
    {
        int count = 0, i;
        for (i = 0; s[i]; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                count++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countCamelCase(s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends