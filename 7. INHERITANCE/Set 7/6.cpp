//WAP to read and print employee information with use of multilevel inheritance.
#include<iostream>
using namespace std;
class A
{
	public :
		
		int id,r,sal,exp;
		char name[100],cn[100],add[100],email[100],con[100];
		
		void data()
		{
			cout<<"\n\n>>>>>=== Enter Data ===<<<<<\n\n";
			cout<<"Employee ID :";
			cin>>id;
			cout<<"Employee Name :";
			cin>>name;
			cout<<"Employee Role no :";
			cin>>r;
		}
};
class B : public A
{
	public :
		
		void data()
		{
			cout<<"Employee Salary :";
			cin>>sal;
			cout<<"Employee Experience :";
			cin>>exp;
		}
};
class C : public B
{
	public :
		
		void ans()
		{
			cout<<"\n\n>>>>>=== Print Data ===<<<<<\n\n";
			cout<<name<<endl<<r<<endl<<sal<<endl;
		}
		void data()
		{
			cout<<"\n\n>>>>>=== Enter Contenu Data ===<<<<<\n\n";
			cout<<"Employee Comp_name :";
			cin>>cn;
			cout<<"Employee Addres :";
			cin>>add;
		}
};
class D : public C
{
	public :
		
		void data()
		{
			cout<<"Employee Email :";
			cin>>email;
			cout<<"Employee Contact :";
			cin>>con;
		}
		void ans()
		{
			cout<<"\n\n>>>>>=== Print Data ===<<<<<\n\n";
			cout<<endl<<endl<<id<<endl<<name<<endl<<r<<endl<<sal<<endl<<exp<<endl<<cn<<endl<<add<<endl<<email<<endl<<con<<endl;
		}
};
main()
{
	D d1;
	
	d1.A::data();
	d1.B::data();
	d1.C::ans();
	d1.C::data();
	d1.D::data();
	d1.D::ans();
}