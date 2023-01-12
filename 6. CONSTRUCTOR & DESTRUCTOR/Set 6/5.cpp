#include<iostream>
using namespace std;
class Flutter
{
	public :
		
		int a,b;
	
		Flutter()
		{
			cout<<"\n>>>>>=== Welcome To The Programming ===<<<<<"<<endl;
			cout<<"--------------------------------------------";
		}
		Flutter(int a,int b)
		{			
			cout<<"\n\nsum is :"<<a+b;
			cout<<"\n\nsub is :"<<a-b;
		}
		Flutter(Flutter &f1)
		{
			cout<<"\n\n>>>>>=== Thanks For Visit ===<<<<<"<<endl;
			cout<<"----------------------------------\n\n";
		}
	//	void math(void math &)
};
main()
{
	Flutter f1;
	
	int a,b;
	
	cout<<"\n\nEnter The Value Of A:";
	cin>>a;
	cout<<"Enter The Value Of B:";
	cin>>b;
	
	Flutter f2(a,b);
	Flutter f3(f1);
	
	
}
