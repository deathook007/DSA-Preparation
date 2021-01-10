#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, K, D;
    cin >> T;
    while (T--)
    {
        cin >> N >> K >> D;
        if (N && K && D == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int A[N], i, sum;
            sum = 0;
            for (i = 0; i < N; i++)
            {
                cin >> A[i];
            }
            for (i = 0; i < N; i++)
            {
                sum = sum + A[i];
            }
            if (sum < K)
            {
                cout << 0 << endl;
            }
            else
            {
                int x;
                x = sum / K;
                if (x >= D)
                    cout << D << endl;
                else
                    cout << x << endl;
            }
        }
    }
    return 0;
}
