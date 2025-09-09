#include<iostream>
using namespace std;
void pattern4(int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
		
	for(int i=n;i>=1;i--){
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
		
	}
}

int main(){
	int n=5;
	pattern4(n);
	//cout<<k;
	return 0;
}
