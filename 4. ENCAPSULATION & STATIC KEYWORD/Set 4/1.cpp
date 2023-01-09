#include<iostream>
using namespace std;
class Employee 
{
	public :
		
		char name[100],add[100],email[100];
		int id,rn,sa,ex,contact;
		
	void setter()
	{
		cout<<"\n>>>>>===enter Employee data===<<<<<\n\n";
		
		cout<<"Employee ID :";
		cin>>id;
		 
		cout<<"Employee name :";
		cin>>name;
		
		cout<<"Employee roll no :";
		cin>>rn;
		
		cout<<"Employee salary :";
		cin>>sa;
		
		cout<<"Employee expiriyanc(on year) :";
		cin>>ex;
		
		cout<<"Employee address :";
		cin>>add;
		
		cout<<"Employee email :";
		cin>>email;
		
		cout<<"Employee contact :";
		cin>>contact;
	}
	void getter()
	{
		cout<<"\n\n>>>>>===print Employee data===<<<<<\n\n";
		
		cout<<endl<<id<<"\t"<<name<<"\t"<<rn<<"\t"<<sa<<"\t"<<ex<<"\t"<<add<<"\t"<<email<<"\t"<<contact<<endl;
	}
};

main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setter();
	e2.setter();
	e3.setter();
	e4.setter();
	e5.setter();
	
	e1.getter();
	e2.getter();
	e3.getter();
	e4.getter();
	e5.getter();
}
