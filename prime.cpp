#include <iostream>
using namespace std;
int main(){
	int n;
	int i;
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not a prime number"<<endl;
			break;
		}
		
	}
    if(i==n){
	cout<<" prime number"<<endl;
	}
	
	return 0;
}
