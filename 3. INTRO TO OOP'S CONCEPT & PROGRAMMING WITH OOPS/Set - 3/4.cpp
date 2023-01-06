//WAP which illustrates the use of public and private access modifiers.
#include<iostream>
using namespace std;
class emp
{
	private:
		
		char name[100],add[100];
		int salary,age;
		
	public:
		
		void setdata()
		{
			cout<<"name :";
			cin>>name;
			cout<<"add :";
			cin>>add;
			cout<<"salary :";
			cin>>salary;
			cout<<"age :";
			cin>>age;	
		}
		
		void getdata()
		{
			cout<<endl<<name<<"\t"<<add<<"\t"<<salary<<"\t"<<age<<endl;
		}	
};
main()
{
	emp e1;
	
	e1.setdata();
	e1.getdata();
}
