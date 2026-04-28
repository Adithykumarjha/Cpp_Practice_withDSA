// Original Array From The Prefix Sum Array

#include<bits/stdc++.h>
using namespace std;

vector<int>decodeArray(vector<int> &Presum){
	
	int n=Presum.size();
	vector<int>arr(n);
	
	arr[0]=Presum[0];
	
	for(int i=1;i<n;i++){
		arr[i]=Presum[i]-Presum[i-1];
	}
	return arr;
	
}

int main(){
	vector<int>Presum{4,10,17,55,70};
	int n=Presum.size();
	
	vector<int>arr=decodeArray(Presum);
	
	for(int num:arr){
		cout<<num<<" ";
	}
	return 0;
}
