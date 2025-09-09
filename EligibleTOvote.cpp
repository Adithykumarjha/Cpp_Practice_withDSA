#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter your age:"<<endl;
	cin>>n;
	if(n>=18){
		cout<<"You are Eligible to vote";
	}
	else{
		cout<<"You are not Eligible to vote ";
	}
	return 0;
}
