
#include <iostream>
using namespace std;

int findElementAtIndex(int a[], int n, int key);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n >> key;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << findElementAtIndex(a, n, key) << endl;
    }

    return 0;
} // } Driver Code Ends

int findElementAtIndex(int a[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == i)
            return a[i];
    }
}