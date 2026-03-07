// Print Missing Numbers

#include<bits/stdc++.h>
using namespace std;

void Missing(int arr[],int n,int low,int high){
	
	unordered_set<int>s;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	
	for(int x=low;x<=high;x++){
		if(s.find(x)==s.end()){
			cout<<x<<" ";
		}
	}
}

int main(){
	int arr[]{2,4,5,7,9,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	int low=4;
	int high=11;
	Missing(arr,n,low,high);
	return 0;
}
