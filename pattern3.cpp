#include<iostream>
using namespace std;
void pattern3(int n){
	
	for(int i=n;i>=1;i--){
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main(){
	int n=5;
	pattern3(n);
	//cout<<k;
	return 0;
}
