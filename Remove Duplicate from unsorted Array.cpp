#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int count = mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 5, 1, 3, 2, 6};
    int n = sizeof(arr) / sizeof(int);
    removeDuplicate(arr, n);
    return 0;
}