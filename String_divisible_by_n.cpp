//This problem solution deals with the problem where the num is very large and provided as string.




#include<bits/stdc++.h>
using namespace std;

class Divisible{
	public:
		bool divisiblebynum(string &s,int num){
			int rem=0;
			for(char c:s){
				int digit=c-'0';
				
				rem=(rem*10+digit)%num;
				
			}
			return rem==0;
			
		}
};

int main(){
	Divisible d;
	string number;
	int num;
	cout<<"Enter a large number:"<<endl;
	cin>>number;
	
	cout<<"Enter the dividing number:"<<endl;
	cin>>num;
	
	if(d.divisiblebynum(number,num)){
		cout<<"The number "<<number<<" is divisible by "<<num;
	}
	else{
		cout<<"The number "<<number<<" is not divisible "<<num;
	}
	
	return 0;
	
}
