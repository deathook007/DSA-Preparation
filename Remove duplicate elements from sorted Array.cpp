#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        int j = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                a[j++] = a[i];
            }
        }
        a[j++] = a[n - 1];
        return j;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        int n = ob.remove_duplicate(a, N);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}