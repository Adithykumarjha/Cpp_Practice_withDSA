// PRODUCT OF ARRAY EXCEPT ITSELF

#include<bits/stdc++.h>
using namespace std;

vector<int>productExceptSelf(vector<int> &arr){
	int n=arr.size();
	vector<int>preffixpro(n),suffixpro(n),res(n);
	
	// prefix product
	preffixpro[0]=1;
	
	for(int i=1;i<n;i++){
		preffixpro[i] =preffixpro[i-1]*arr[i-1];
	}
	
	//suffix prouct
	suffixpro[n-1]=1;
	
	for(int j=n-2;j>=0;j--){
		suffixpro[j]=arr[j+1]*suffixpro[j+1];
	}
	
	//resultant vector
	
	for(int i=0;i<n;i++){
		res[i]=preffixpro[i]*suffixpro[i];
	}
	
	return res;
}

int main(){
	vector<int>arr{2,3,4,5,6};
	vector<int>sol=productExceptSelf(arr);
	
	for(int s:sol){
		cout<<s<<" ";
	}
}
