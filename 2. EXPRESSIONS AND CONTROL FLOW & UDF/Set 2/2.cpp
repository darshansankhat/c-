#include<iostream>
using namespace std;
int fact(int a);
main()
{
	int a,b;
	
	cout<<"enter the value:";
	cin>>a;
	
	b=fact(a);
	
	cout<<b;
}
int fact(int a)
{
	int n,i,fact=1;
	
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	
	return fact;
}
