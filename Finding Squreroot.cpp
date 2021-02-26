#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t, n, root;
    cin >> t;
    int squre_root(int);
    while (t--)
    {
        cin >> n;
        root = squre_root(n);
        cout << root << endl;
    }
    return 0;
}
int squre_root(int a)
{
    int x;
    x = sqrt(a);
    return (x);
}
