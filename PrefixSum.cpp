#include<bits/stdc++.h>
using namespace std;

vector<int>prefix(vector<int>&arr){
	
	int n=arr.size();
	
	vector<int>prefixSum(n);
	prefixSum[0]=arr[0];
	
	for(int i=1;i<n;i++){
		prefixSum[i]=arr[i]+prefixSum[i-1];
	}
	
	return prefixSum;
}

int main(){
	vector<int>arr{6,4,2,1,2,1,6,0,3,2,1,4};
	vector<int>result=prefix(arr);
	for(auto x:result){
		cout<<x<<" ";
	}
	return 0;
}


