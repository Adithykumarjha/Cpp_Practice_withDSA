// MAJORITY ELEMENT IN AN ARRAY

#include<bits/stdc++.h>
using namespace std;

void FindMajority(int arr[],int n){
	
	int maxcount=0;
	int index=-1;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>maxcount){
			maxcount=count;
			index=i;
		}
		
	}
	
	if(maxcount>n/2){
		cout<< "The Majority Element is :"<<arr[index]<<" ";
	}
	else{
		cout<<"No majority element"<<endl;
	}
}

int main(){
	int arr[]{4,5,7,5,5,8,5,5,5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	FindMajority(arr,n);
	return 0;
}
