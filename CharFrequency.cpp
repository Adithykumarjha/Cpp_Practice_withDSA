// Frequency of each character

#include<bits/stdc++.h>
using namespace std;

void CharFreq(string str){
	unordered_map<char,int>F;
	
	for(int i=0;str[i];i++){
		
		if(F.find(str[i])==F.end()){
			F.insert(make_pair(str[i],1));
		}
		else{
			F[str[i]]++;
		
		}
	}
	
	for(auto &i:F){
		cout<<i.first<<" "<<i.second<<endl;
	}
}


int main(){
	
	string str="AdityaKumarJha";
	CharFreq(str);
	
	return 0;
}
