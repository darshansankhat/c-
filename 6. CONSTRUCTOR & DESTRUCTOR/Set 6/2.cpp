#include<iostream>
using namespace std;
class Add
{
	public :
		Add(int a,int b)
		{
			cout<<"\n\nSum Is ="<<a+b<<endl;
			cout<<"\n\nSub is ="<<a-b;
		}
};
main()
{
	
	int a,b;
	
	cout<<"Enter The Value Of A :";
	cin>>a;
	cout<<"Enter The Value Of B :";
	cin>>b;
	
	Add a1(a,b);	
}
