#include<iostream>
using namespace std;
int main(){
	
	int sum=0;
	//cout<<"Enter the numbers to find their sum:"<<endl;
	int arr[4]={5,4,50,25};
	
	for(int i=0;i<=sizeof(arr)-1;i++){
		sum=sum+arr[i];
		
		cout<<arr[i];
	}
	cout<<sum<<" ";
	
	return 0;
	
	
}
