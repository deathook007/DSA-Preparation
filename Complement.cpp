#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        int l=0;
        int ans_l,ans_r;
        int maxDiff=0;
        int zeroCount = 0, oneCount = 0;
        for(int i = 0;i<n;i++){
            if(str[i] == '0'){
                zeroCount++;
            }
            else oneCount++;
           
            if(zeroCount < oneCount){
                l=i+1;
                zeroCount = 0;
                oneCount = 0;
            }else{
               if(zeroCount-oneCount > maxDiff) {
                   ans_l = l;
                   ans_r = i;
                   maxDiff = zeroCount-oneCount;
               }
           }
       }
       if(maxDiff == 0) return {-1};
       
       return {ans_l+1, ans_r+1};
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        int l=0;
        int ans_l,ans_r;
        int maxDiff=0;
        int zeroCount = 0, oneCount = 0;
        for(int i = 0;i<n;i++){
            if(str[i] == '0'){
                zeroCount++;
            }
            else oneCount++;
           
            if(zeroCount < oneCount){
                l=i+1;
                zeroCount = 0;
                oneCount = 0;
            }else{
               if(zeroCount-oneCount > maxDiff) {
                   ans_l = l;
                   ans_r = i;
                   maxDiff = zeroCount-oneCount;
               }
           }
       }
       if(maxDiff == 0) return {-1};
       
       return {ans_l+1, ans_r+1};
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}