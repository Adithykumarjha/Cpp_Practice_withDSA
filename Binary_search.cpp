#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			return mid;
			
		}
		
		if(key>arr[mid]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = (start+end)/2;
	}
	return -1;
}


int main(){
	int even[6]={2,4,8,12,18,22};
	int odd[6]={3,6,9,12,15,17};
	int index=BinarySearch(even,6,12);
	cout<<"Index of 12 is :"<<index<<endl;
	
	
	
	
	
	return 0;
	
}
