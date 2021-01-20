#include <iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int count = 0, i;
        for (i = 0; s[i]; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                count++;
            else if (s[i] >= 97 && s[i] <= 122)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}