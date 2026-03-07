// Set Operations

#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int>s;
	
	int arr[]{1,20,11,4,5,4,8,7,6,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	
	
	for(auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	
	if(s.find(5)!=s.end()){
		cout<<"\nFound";
	}else{
		cout<<"Not Found";
	}
	
	return 0;
}
