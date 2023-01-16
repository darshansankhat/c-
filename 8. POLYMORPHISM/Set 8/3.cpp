//WAP which illustrate the use of Method Overriding concept.
#include<iostream>
using namespace std;
class Method
{
	private :
		
		int a,b;
		
	public :
		
		void ans(int a,int b)
		{			
			cout<<endl<<endl<<"sum is :"<<a+b<<endl;
		}		
};
class Method1
{
	private :
		
		int a,b;
		
	public :
			
		void ans(int a,int b)
		{			
			cout<<endl<<endl<<"sub is :"<<a-b<<endl;
		}		
};
main()
{
	int a,b;
	
	cout<<"enter the value of A :";
	cin>>a;
	cout<<"enter the value of B :";
	cin>>b;
	
	Method m1;
	Method1 m2;
	
	m1.ans(a,b);
	m2.ans(a,b);
}

