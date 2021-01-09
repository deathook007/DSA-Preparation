#include <iostream>
using namespace std;
int getSum(int a[], int n);

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

        cout << getSum(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends

int getSum(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}