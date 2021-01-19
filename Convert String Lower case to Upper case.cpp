#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    return 0;
}