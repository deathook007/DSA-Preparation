#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calcSum(int a, int b, int c);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = calcSum(a, b, c);
        cout << sum << "\n";
    }

    return 0;
} // } Driver Code Ends

int calcSum(int a, int b, int c)
{
    int sum = 0;
    sum = a + b + c;
    return sum;
}
