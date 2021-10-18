#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int arr[5];
	    int India = 0, England = 0;
	    for(int i=0; i<5; i++){
	        cin>>arr[i];
	        if(arr[i] == 1){
	            India++;
	        }
	        else if(arr[i] == 2){
	            England++;
	        }
	    }
	    if(India > England){
	        cout<<"INDIA"<<endl;
	    }
	    else if(India == England){
	        cout<<"DRAW"<<endl;   
	    }
	    else{
	        cout<<"ENGLAND"<<endl;
	    }
	    
	}
	return 0;
}
