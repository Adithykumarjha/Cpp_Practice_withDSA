#include<iostream>
#include<stack>
using namespace std;

void printstack(stack<int>st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}


int main(){
	stack<int>currentstack;
	currentstack.push(20);
	currentstack.push(25);
	currentstack.push(48);
	currentstack.push(50);
	currentstack.push(74);
	currentstack.push(12);
	
	cout<<"Original Stack:";
	printstack(currentstack);
	
	stack<int>reverse;
	while(!currentstack.empty()){
		reverse.push(currentstack.top());
		currentstack.pop();
	}
	currentstack=reverse;
	
	cout<<"Reverse stack :";
	printstack(currentstack);
	
	return 0;
	

}
