#include <iostream>
using namespace std;

int main()
{
    int t, n, first, last, sum;
    cin >> t;
    while (t--)
    {
        cin >> n;
        last = n % 10;
        while (n)
        {
            first = n % 10;
            n = n / 10;
        }
        sum = first + last;
        cout << sum << endl;
    }
    return 0;
}
