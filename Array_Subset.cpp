// Check whether an array is subset of another array

#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>&arr1,vector<int>&arr2){
	multiset<int>hash(arr1.begin(),arr1.end());
	
	for(int num:arr2){
		if(hash.find(num)==hash.end()){
			return false;
		}
		hash.erase(num);
	}
	return true;
}

int main(){
	vector<int>a{2,1,13,4,6,32,43,3};
	vector<int>b{2,13,4,6,3};
	
	if(isSubset(a,b)){
		cout<<"True";
	}else{
		cout<<"False";
	}
	
	return 0;
}
