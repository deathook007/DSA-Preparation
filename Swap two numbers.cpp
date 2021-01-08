#include <iostream>
using namespace std;

int main()
{
    int x, y, temp, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        temp = x;
        x = y;
        y = temp;
        cout << x << " " << y;
        cout << " " << endl;
    }
    return 0;
}