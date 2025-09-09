#include<iostream>
#include<list>

using namespace std;

int main(){
	list<int>nums = {1,7,4,5,6};
	
	for(int num:nums){
		cout<<num<<"\n";
	}
	return 0;
}

