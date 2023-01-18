// WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function.
//Then create two bases variables Zebra and Dolphin which write a message telling the age,
//the name and giving some extra information (e.g. place of origin).
#include<iostream>
using namespace std;
class animal
{
	public :
		
		int age;
		char name[100],coler[100];
		
		void setdata()
		{
			cout<<"\n\n>>>>>=== Enter Data ===<<<<<\n\n";
			cout<<"Enter The Name :";
			cin>>name;
			cout<<"Enter The Age :";
			cin>>age;
			cout<<"Enter The Coler :";
			cin>>coler;
		}
};
class Zebra : public animal
{
	public :
		
		void ans()
		{
			cout<<endl<<name<<endl<<age<<endl<<coler<<endl;
		}
};
class Dolphin : public animal
{
	public :
		
		void ans()
		{
			cout<<endl<<name<<endl<<age<<endl<<coler<<endl;
		}
};
main()
{
	Zebra z1;
	Dolphin d1;
	
	z1.setdata();
	d1.setdata();
	
	z1.Zebra::ans();
	d1.Dolphin::ans();
}

