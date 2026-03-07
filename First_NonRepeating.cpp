// First Non Repeating Character

#include<bits/stdc++.h>
using namespace std;

char NonRepeating(string &s){
	
	int n=s.size();
	
	for(int i=0;i<n;i++){
		bool flag=false;
		
		for(int j=0;j<n;j++){
			if(i!=j && s[i]==s[j]){
				flag=true;
				break;
			}
		}
		if(!flag){
			return s[i];
		}
	}
	return '$';
}

int main(){
	string s= "GeeksForGeeks";
	cout<<NonRepeating(s);
	return 0;
}
