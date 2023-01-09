#include<iostream>
#include<string.h>
using namespace std;
class Hotel
{
	 private :
	 	
	 	int id,st,y,rt;
	 	char name[100],tp[100],add[100],web[100];
	 	float rms;
	
	 public :
	 	
	 	void setdata(int id,int st,int y,int rt,char name[],char tp[],char add[],char web[],float rms)
	 	{	 		
	 		this->id=id;
	 		strcpy(this->name,name);
	 		strcpy(this->tp,tp);
	 		this->st=st;
	 		this->rms=rms;
	 		this->y=y;
	 		strcpy(this->add,add);
	 		this->rt=rt;
	 		strcpy(this->web,web);
		}
		void getdata()
		{
			cout<<endl<<id<<"\t"<<name<<"\t"<<tp<<"\t"<<st<<'\t'<<rms<<"\t"<<y<<"\t"<<add<<"\t"<<rt<<"\t"<<web<<endl;
		}
};
main()
{
	Hotel h1,h2;
	
	int id,st,y,rt;
	char name[100],tp[100],add[100],web[100];
	float rms;
	
	cout<<"\n\n>>>>>=== enter Hotel info ===<<<<<\n\n";
	
	cout<<"Hotel ID :";
	cin>>id;
	cout<<"Hotel name :";
	cin>>name;
	cout<<"Hotel type(vage or non vage) :";
	cin>>tp;
	cout<<"Hotel staff size :";
	cin>>st;
	cout<<"Hotel room size(on inch):";
	cin>>rms;
	cout<<"Hotel establish year :";
	cin>>y;
	cout<<"Hotel address :";
	cin>>add;
	cout<<"Hotel rating(1 star to 5) :";
	cin>>rt;
	cout<<"Hotel website :";
	cin>>web;
	
	h1.setdata(id,st,y,rt, name,tp,add,web,rms);
	h1.getdata();
}
