//This problem solution deals with the problem where the num is very large and provided as string.




#include<bits/stdc++.h>
using namespace std;

class Divisible{
	public:
		bool divisibleby13(string &s){
			int rem=0;
			for(char c:s){
				int digit=c-'0';
				
				rem=(rem*10+digit)%13;
				
			}
			return rem==0;
			
		}
};

int main(){
	Divisible d;
	string number;
	cout<<"Enter a large number:"<<endl;
	cin>>number;
	
	if(d.divisibleby13(number)){
		cout<<"The number "<<number<<" is divisible by 13";
	}
	else{
		cout<<"The number "<<number<<" is not divisible by 13";
	}
	
	return 0;
	
}
