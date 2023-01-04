#include<iostream>
using namespace std;
int fact(int a);
main()
{
	int a;
	
	fact(a);
}
inline int fact(int a)
{
	int i;
	
	cout<<"enter the value:";
	cin>>a;
	
	for(i=1;i<=10;i++)
	{
		cout<<a;
		cout<<"*";
		cout<<i;
		cout<<"=";
		cout<<a*i<<endl;
	}
}
