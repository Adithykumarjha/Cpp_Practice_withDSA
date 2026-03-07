// Two Sum using unordered_set

#include<bits/stdc++.h>
using namespace std;

bool targetSum(vector<int>&arr,int target){
	int n=arr.size();
	unordered_set<int>set;
	for(int i=0;i<n;i++){
		int complement=target-arr[i];
		if(set.find(complement)!=set.end()){
			return true;
		}
		set.insert(arr[i]);
	}
	return false;
}

int main(){
	vector<int>arr{2,1,4,-3,5,7,6};
	int target=9;
	if(targetSum(arr,target)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	return 0;
	
}
