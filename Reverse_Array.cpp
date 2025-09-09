//Reversing the Elements of an array
//Method 1

#include<iostream>
#include<vector>
using namespace std;
vector<int>Reverse(vector<int>v){
	int s=0,e=v.size()-1;
	while(s<=e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}


void Print(vector<int>v){
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}




int main(){
	vector<int>v;
	v.push_back(11);
	v.push_back(50);
	v.push_back(15);
	v.push_back(22);
	v.push_back(10);
	v.push_back(35);
	
	vector<int>ans=Reverse(v);
	Print(ans);
	
	return 0;
	
}
