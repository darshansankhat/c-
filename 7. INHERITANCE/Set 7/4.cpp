//WAP to read and print employee information using multiple inheritance.
#include<iostream>
using namespace std;
class Id
{
	public :
		
		int id;
		
		void setdata()
		{
			cout<<"Enter the Id :";
			cin>>id;
		}
};
class Name
{
	public :
		
		char name[100];
		
		void setdata()
		{
			cout<<"Enter the Name :";
			cin>>name;
		}
};
class Age
{
	public :
		
		int age;
		
		void setdata()
		{
			cout<<"Enter The Age :";
			cin>>age;
		}
};
class Roll_no
{
	public :
		
		int roll_no;
		
		void setdata()
		{
			cout<<"Enter The Roll No :";
			cin>>roll_no;
		}
};
class Contect
{
	public :
		
		char contect[100];
		
		void setdata()
		{
			cout<<"Enter The Contect :";
			cin>>contect;
		}
};
class Ans : public Id,public Name,public Age,public Roll_no,public Contect
{
	public :
		
		void getdata()
		{
			cout<<endl<<endl<<id<<endl<<name<<endl<<age<<endl<<roll_no<<endl<<contect<<endl;
		}
};
main()
{
	Ans a1;
	
	a1.Id::setdata();
	a1.Name::setdata();
	a1.Age::setdata();
	a1.Roll_no::setdata();
	a1.Contect::setdata();
	
	a1.getdata();
}

