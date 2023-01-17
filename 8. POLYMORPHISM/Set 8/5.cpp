//WAP to create an Class Shape. Make two sub-class Circle and Triangle which implements a method from Shape class called getArea()
#include<iostream>
using namespace std;
class shape
{
	public :
		
		virtual void getarea()=0;
};
class circle : public shape
{
	public :
		
		int r;
		
		void getarea()
		{
			cout<<"Entaer Tha Circal R :";
			cin>>r;
			
			cout<<endl<<endl<<3.14*(r*r)<<endl;
		}
};
class triangle : public shape
{
	public :
		
		int base,h;
		
		void getarea()
		{
			cout<<"Entaer Tha Triangle Base :";
			cin>>base;
			cout<<"Enter The Triangle Highat :";
			cin>>h;
			
			cout<<endl<<endl<<(base*h)/2<<endl;
		}
};
main()
{
	shape *s,*s1;
	
	circle c1;
	s=&c1;
	s->getarea();
	
	triangle t1;
	s1=&t1;
	s1->getarea();
}
