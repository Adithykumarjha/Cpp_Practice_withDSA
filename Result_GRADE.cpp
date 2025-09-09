#include<iostream>
using namespace std;
int main(){
	int maths,science,social,gk,hindi,telugu,total;
	float percent;
	cout<<"Enter your subject wise marks:"<<endl;
	cin>>maths;
	cin>>social;
	cin>>science;
	cin>>gk;
	cin>>hindi;
	cin>>telugu;
	total=maths+science+social+gk+hindi+telugu;
	percent=total/6;
	if(percent>=85 && percent<=100){
		cout<<"Grade A";
	}
	else if(percent>=75 && percent<85){
		cout<<"Grade B";
	}
	else if(percent>=50 && percent<75){
		cout<<"Grade C";
	}
	else{
		cout<<"The candidate has been failed";
	}
	return 0;
	
}
