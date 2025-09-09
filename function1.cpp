#include <iostream>
using namespace std;
int area(int length,int width);   //function prototype
int main()
{
	int lengthofyard;
	int widthofyard;
	int areaofyard;
	
	cout<<"\nLength of yard:";
	cin>>lengthofyard;
	cout<<"\nwidth of the yard:";
	cin>>widthofyard;
	areaofyard=area(lengthofyard,widthofyard);
	cout<<"\nArea of the yard:";
	cout<<areaofyard;
}

int area(int l,int w)
{
	return l*w;
}
