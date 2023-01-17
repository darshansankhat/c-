#include<iostream>
using namespace std;
class A
{
	public :
	
		virtual void goldloan()=0;
};
class B : public A
{
	public :
		
		char name[100],d[100];
		
		void goldloan()
		{
			cout<<"Enter The Banck Name :";
			cin>>name;
			cout<<"Enter The loan HRA in % :";
			cin>>d;
			
			cout<<"\n\nname is :"<<name<<"\nHRA is :"<<d<<endl;
		}
};
class C : public A
{
	public :
		
		char name1[100],d1[100];
		
		void goldloan()
		{
			cout<<"\n\nEnter The Bank Name :";
			cin>>name1;
			cout<<"Enter The loan HRA in % :";
			cin>>d1;
			
			cout<<"\n\nname is :"<<name1<<"\nHRA is :"<<d1<<endl;
		}
};
main()
{
	A *a,*a1;
	
	B b1;
	a=&b1;
	a->goldloan();
	
	C c1;
	a1=&c1;	
	a1->goldloan();	
}              
