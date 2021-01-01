#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], x, i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        x = a[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = x;
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}