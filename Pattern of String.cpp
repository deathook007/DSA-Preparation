#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n, i, j;
        n = s.length();
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                cout << s[j];
            }
            cout << endl;
        }
    }
    return 0;
}