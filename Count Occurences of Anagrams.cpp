#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int search(string p, string s) {
	    vector<int> p_hash(26, 0), s_hash(26, 0);
        int s_len = s.size(), p_len = p.size(), count=0;
        if(s_len < p_len){
            return 0;
        }
        for(int i=0; i<p_len; i++){
            p_hash[p[i] - 'a']++;
            s_hash[s[i] - 'a']++;
        }
        if(p_hash == s_hash){
            count++;
        }
        for(int i=p_len; i<s_len; i++){
            s_hash[s[i - p_len] - 'a']--;
            s_hash[s[i] - 'a']++;
            if(s_hash == p_hash){
                count++;
            }
        }
        return count;
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}