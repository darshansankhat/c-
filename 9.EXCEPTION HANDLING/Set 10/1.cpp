//Write a "Garage" class that has a "Car" that is having troubles with its "Motor". Use a function-level try block 
//in the "Garage" class constructor to catch an exception (thrown from the "Motor" class) when its "Car" object 
//is initialized. Throw a different exception from the body of the "Garage" constructor s handler and catch it in main( ).

#include<iostream>
using namespace std;
class Garage
{
	public :
		
		Garage(int a)
		{
			try
			{
				throw a;
			}
			catch(...)
			{
				cout<<"Car Is Now Wosing....!!"<<endl;
			}
		}
};
class Car 
{
	public :
		
		Car()
		{
			throw Garage(1);
		}
};
class Motor
{
	public :
		
		Motor()
		{
			Car c1;
		}
};
main()
{
	Motor m1;
}