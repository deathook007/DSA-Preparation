#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max, min;
        max = a[0];
        for (i = 1; i < n; i++)
        {
            max = max > a[i] ? max : a[i];
        }
        min = a[0];
        for (i = 1; i < n; i++)
        {
            min = min < a[i] ? min : a[i];
        }
        cout << max << " " << min << endl;
    }
    return 0;
}