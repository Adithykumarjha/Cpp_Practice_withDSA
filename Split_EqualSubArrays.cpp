#include<bits/stdc++.h>
using namespace std;

int splitPoint(int arr[],int n){
	
	int lsum=0;
	for(int i=0;i<n;i++){
		lsum +=arr[i];
	}
	
	int rsum=0;
	for(int i=n-1;i>=0;i--){
		rsum+=arr[i];
		
		lsum-=arr[i];
		
		if(lsum==rsum){
			return i;
		}
		
	}
	
	return -1;
}

void splitArray(int arr[],int n){
	
	int split=splitPoint(arr,n);
	
	if(split==-1 || split==n){
		cout<<"cannot divide";
	}
	
	for(int i=0;i<n;i++){
		cout<<endl;
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]{1,3,6,5,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	splitArray(arr,n);
	return 0;
}

