#include<iostream>
using namespace std;
class student
{
	public :
		
		int id,st;
		char name[100],add[100],gm[100];
	
		void data()
		{
			cout<<"\n\n>>>>>=== enter data ===<<<<<\n\n";
			cout<<"Student ID :";
			cin>>id;
			cout<<"Student name :";
			cin>>name;
			cout<<"Student standerd :";
			cin>>st;
			cout<<"Student gmail :";
			cin>>gm;
			cout<<"Student addres :";
			cin>>add;
		}
		void ans()
		{
			cout<<"\n\n>>>>>=== print data ===<<<<<\n\n";
			cout<<endl<<id<<endl<<name<<endl<<st<<endl<<gm<<endl<<add<<endl;
		}
};
main()
{
	student s1[100];
	
	int i,n;
	
	cout<<"enter the student :";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s1[i].data();
	}
	for(i=0;i<n;i++)
	{
		s1[i].ans();
	}
}
