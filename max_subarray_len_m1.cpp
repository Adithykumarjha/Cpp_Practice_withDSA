// 


// METHOD -1 ( Iterative method)




#include<bits/stdc++.h>
using namespace std;




int maxlen(int arr[],int sum,int sum){
	int res;
	
	for(int i=0;i<n;i++){
		int curr_sum=0;
		for(int j=i;j<n;j++){
			curr_sum+=arr[j];
			if(curr_sum==sum){
				res=max(res,j-i+1);
			}
		}
	}
	return res;
}
