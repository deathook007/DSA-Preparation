//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    string longest(string names[], int n)
    {
        int i, max;
        max = names[0].length();
        int flag = 0;
        for (i = 0; i < n; i++)
        {
            int a;
            a = names[i].length();
            if (a > max)
            {
                max = a;
                flag = i;
            }
        }
        return (names[flag]);
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
        string names[n];

        for (int i = 0; i < n; i++)
            cin >> names[i];
        Solution ob;
        cout << ob.longest(names, n) << endl;
    }
}
// } Driver Code Ends