#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
