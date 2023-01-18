//WAP that defines a shape class with a constructor that gives value to width and height. 
//The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
//In the main, define two variables a triangle and a rectangle and then call the area() 
//function in this two varibles.
#include<iostream>
using namespace std;
class Shape
{
	public :
		
		int w,h;
		
		Shape()
		{
			cout<<"Enter The Width :";
			cin>>w;
			cout<<"Enter The Height :";
			cin>>h;
		}
};
class Triangle : public Shape
{
	public :
		
		float ans;
		
		void area()
		{
			ans=(w*h)/2;
			
			cout<<"Triangle ="<<ans<<endl;
		}
};
class Rectangle : public Shape
{
	public :
		
		float ans;
		
		void area()
		{
			ans=(w*h);
			
			cout<<"Rectancle ="<<ans<<endl;
		}
};
main()
{
	Triangle t1;
	Rectangle r1;
	
	t1.Triangle::area();
	r1.Rectangle::area();
}
