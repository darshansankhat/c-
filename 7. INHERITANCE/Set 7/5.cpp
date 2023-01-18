//WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.
#include<iostream>
using namespace std;
class number
{
	public :
		
		int a;
		
		void setdata()
		{
			cout<<"\n\n>>>>>=== Enter data ===<<<<<\n\n";
			cout<<"enter the value of A :";
			cin>>a;
		}
};
class square : public number
{
	public :
		
		void ans()
		{
			cout<<endl<<endl<<"square is :"<<a*a<<endl;
		}
};
class cube : public number
{
	public :
		
		void ans()
		{
			cout<<endl<<endl<<"cube is :"<<a*a*a<<endl;
		}
};
main()
{
	square s1;
	
	s1.setdata();
	s1.ans();
	
	cube c1;
	
	c1.setdata();
	c1.ans();
}
