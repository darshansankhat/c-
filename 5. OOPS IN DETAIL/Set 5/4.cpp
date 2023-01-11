// WAP which perform Addition of members of two different classes using friend Function.
#include<iostream>
using namespace std;
class add
{
	private :
		
		int a,b;
		
	friend void ans();
};
void ans()
{
	add a1;
	a1.a;
	a1.b;
	
	cout<<"enter the vlue of A :";
	cin>>a1.a;
	cout<<"enter the vlue of B :";
	cin>>a1.b;
	
	cout<<"\nans is = "<<a1.a+a1.b;
}
main()
{
	ans();
}
