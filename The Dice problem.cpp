#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++
class Solution
{
public:
    int oppositeFaceOfDice(int N)
    {
        int m;
        m = 7 - N;
        return m;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.oppositeFaceOfDice(N);
        cout << ans << endl;
    }
    return 0;
} // } Driver Code Ends