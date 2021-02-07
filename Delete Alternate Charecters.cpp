// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution
{
public:
    string delAlternate(string S)
    {
        char temp[1000];
        int x = 0;
        for (int i = 0, n = S.length(); i < n; i = i + 2, x++)
        {
            temp[x] = S[i];
        }
        temp[x] = '\0';
        return temp;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}
// } Driver Code Ends