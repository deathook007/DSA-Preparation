//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool IsPerfect(int a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (IsPerfect(a, n))
            cout << "PERFECT\n";
        else
            cout << "NOT PERFECT\n";
    }

} // } Driver Code Ends

//User function Template for C++

bool IsPerfect(int a[], int n)
{
    int f = 0, i;
    for (i = 0; i <= n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        return true;
    else
        return false;
}