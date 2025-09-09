#include <bits/stdc++.h>
using namespace std;

void print(stack<int>st){
	while(!st.empty()){
		
		cout<<st.top()<<"  ";
		st.pop();
	}
}


int main(){
	
	stack<int>st1;
	
	st1.push(101);
	st1.push(102);
	st1.push(24);
	st1.push(90);
	st1.push(30);
	
	print(st1);
	cout<<endl;
	
}
