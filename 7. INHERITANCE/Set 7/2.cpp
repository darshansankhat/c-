//WAP with a mother class and an inherited daugther class.Both of them should have a method void display()
//that prints a message (different for mother and daugther). In the main define a daughter and call
//the display() method on it.
#include<iostream>
using namespace std;
class mother
{
	public :
		
		void display()
		{
			cout<<"Hello Daugthr ...."<<endl;
		}
};
class daugther : public mother 
{
	public :
		
		void display()
		{
			cout<<"Hii Mother ....."<<endl;
		}
};
main()
{
	daugther d1;
	
	d1.display();
	d1.mother::display();
}
