#include<iostream>
using namespace std;
int addition(int a,int b);   //function prototype
int main()
{
	int num1;
	int num2;
	int sum;
	cout<<"\nEnter the 1st value :";
	cin>>num1;
	cout<<"Enter the 2nd value :"<<endl;
	cin>>num2;
	sum=addition(num1,num2);
	cout<<"The sum of the two values are : "<<endl;
	cout<<sum;	
}
int addition(int c,int d)
{
	return c+d;
}


