//DAY  13
// BUBBLE SORT

#include<vector>
#include<iostream>
using namespace std;
int BubbleSort(vector<int>&v){
	int n=v.size();
	for(inti=1;i<(n-1);i++){
		bool swapped=false;
		for(int j=0;j<(n-i-1);j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
				bool swapped=true;
			}
		}
		if(swapped==false){
		break;
	    }
	}
		
}
int main(){
	
    vector<int> v={5,1,4,8,2};
    BubbleSort(v);

	for(auto i:v){
		cout<<i<<"";
	return 0;
	}
}
	
	

