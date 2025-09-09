#include<iostream>
using namespace std;
int sub(int a,int b);
int main()
{
	int val1;
	int val2;
	int difference;
	cout<<"Enter the val1 :";
	cin>>val1;
	cout<<"\nEnter the val2 :";
	cin>>val2;
	difference=sub(val1,val2);
	cout<<"\nThe difference is :";
	cout<<difference;
}
int sub(int c, int d)
{
	return c-d;
}
