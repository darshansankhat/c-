#include<iostream>
using namespace std;
class HighSchool
{
	public :
			
		static int id,rn,st,age;
		static char name[100],in[100],add[100],con[100];
		
		
		void setdata()
		{
			cout<<"\n\n>>>>>===  HighSchool ===<<<<<\n\n";
			cout<<"HighSchool stu_id :";
			cin>>id;
			cout<<"HighSchool stu_name :";
			cin>>name;
			cout<<"HighSchool stu_roll_no :";
			cin>>rn;
			cout<<"HighSchool stu_standard :";
			cin>>st;
			cout<<"HighSchool stu_age :";
			cin>>age;
			cout<<"HighSchool stu_contact :";
			cin>>con;
			cout<<"HighSchool stu_edu_institute_name :";
			cin>>in;
			cout<<"HighSchool stu_address :";
			cin>>add;
		}
		
		void getdata()
		{
			cout<<endl<<endl<<id<<"\t"<<name<<"\t"<<rn<<"\t"<<st<<"\t"<<age<<"\t"<<con<<"\t"<<in<<"\t"<<add<<endl;
		}
};

int HighSchool::id;
int HighSchool::rn;
int HighSchool::st;
int HighSchool::age;
char HighSchool::name[100];
char HighSchool::in[100];
char HighSchool::add[100];
char HighSchool::con[100];

class College
{
	public :
		
		static int id,rn,st,age;
		static char name[100],in[100],add[100],con[100];
		
		void setter()
		{		
			cout<<"\n\n>>>>>===  College ===<<<<<\n\n";
			cout<<"College stu_id :";
			cin>>id;
			cout<<"College stu_name :";
			cin>>name;
			cout<<"College stu_roll_no :";
			cin>>rn;
			cout<<"College stu_standard :";
			cin>>st;
			cout<<"College stu_age :";
			cin>>age;
			cout<<"College stu_contact :";
			cin>>con;
			cout<<"College stu_edu_institute_name :";
			cin>>in;
			cout<<"College stu_address :";
			cin>>add;
		}
		
		void getter()
		{
			cout<<endl<<endl<<id<<"\t"<<name<<"\t"<<rn<<"\t"<<st<<"\t"<<age<<"\t"<<con<<"\t"<<in<<"\t"<<add<<endl;
		}
};

int College::id;
int College::rn;
int College::st;
int College::age;
char College::name[100];
char College::in[100];
char College::add[100];
char College::con[100];

main()
{
	HighSchool h1;
	h1.setdata();
	h1.getdata();
	
	College c1;
	c1.setter();
	c1.getter();
}
 
