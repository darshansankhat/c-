//WAP to demonstrate example of copy constructor.
#include<iostream>
using namespace std;
class Add
{
	public :
		
		int a,b;
		
		Add()
		{
			cout<<"Enter The Value Of A:";
			cin>>a;
			cout<<"Enter The Value Of B:";
			cin>>b;
			
			cout<<"sum is :"<<a+b;
		}
		Add(Add &a2)
		{
			
		}
};
main()
{
	Add a2;
	Add a1(a2);
}
