
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    string revStr(string S)
    {
        reverse(S.begin(), S.end());
        return (S);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}
