#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int N;
        cin >> N;
        long long int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        long long int max, min;
        max = A[0];
        for (int i = 1; i < N; i++)
        {
            max = max > A[i] ? max : A[i];
        }
        min = A[0];
        for (int i = 1; i < N; i++)
        {
            min = min < A[i] ? min : A[i];
        }
        long long int ans;
        ans = (max - min) * 2;
        cout << ans << endl;
    }
    return 0;
}
