
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    string reverseWord(string str){
        int n = str.length();
        int start = 0;
        int end = n-1;
        while(start < end){
            swap(str[start], str[end]);
            start++; 
            end--;
        }
        return str;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.reverseWord(S) << endl;
    }
    return 0;
}
