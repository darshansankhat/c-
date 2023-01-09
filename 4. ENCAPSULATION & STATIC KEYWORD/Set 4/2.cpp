 WAP to create a class which Read and print Class, Student details using Two Classes. (Make two classes, create one classe's obj in another class.)
#include<iostream>
#include<string.h>
using namespace std;
class Read
{
	public :
		
		char name[100],gm[100],add[100];
		int id,rn,mark;
		
		void setdata()
		{			
			cout<<"\n\n>>>>>=== enter Student data ===<<<<<\n\n";
			cout<<"Student name :";
			cin>>name;
			cout<<"Student ID :";
			cin>>id;
			cout<<"Student roll no :";
			cin>>rn;
			cout<<"Student 12th mark :";
			cin>>mark;
			cout<<"Student gmail :";
			cin>>gm;
			cout<<"Student adress :";
			cin>>add;
		}
};
class Print
{
	public :
		
	void getdata(Read r1)
	{		
		cout<<"\n\n>>>>>=== print Student data ===<<<<<\n\n";
		cout<<endl<<r1.name<<"\t"<<r1.id<<"\t"<<r1.rn<<"\t"<<r1.mark<<"\t"<<r1.gm<<"\t"<<r1.add<<endl;
	}
};
main()
{
	Read r1;
	Print p1;
	r1.setdata();
	p1.getdata(r1);
}
