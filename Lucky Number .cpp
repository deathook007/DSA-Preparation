#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int a, b, c;
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    if(a == 7 || b == 7 || c == 7){
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}