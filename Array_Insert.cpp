#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


struct Array
{
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr){
	
	int i;
	cout<<"Elements are:"<<endl;
	for(i=0;i<arr.length;i++){
		printf("%d\n",arr.A[i]);
	}
}


void Append(struct Array *arr,int x){
	if(arr->length<arr->size){
		arr->A[arr->length++]=x;
	}
}

void Insert(struct Array *arr,int index,int x){
	int i;
	if(index>=0 && index <=arr->length){
		for(i=arr->length;i>index;i--){
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=x;
		arr->length++;
		
	}
} 

int main(){
	struct Array arr={{2,3,4,5,6},8,10};
	//Insert(&arr,1,10);
	Display(arr);
	
	return 0;
	
	
}
