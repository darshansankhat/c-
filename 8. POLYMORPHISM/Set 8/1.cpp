//WAP to create a Message class with a constructor that takes a single string with a default value. 
//Create a private member string, and in the constructor simply assign the argument string to your internal string. 
//Create two overloaded member functions called print( ): 
//one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument, 
//which it prints in addition to the internal message.
#include<iostream>
#include<string.h>
using namespace std;
class Message
{
	private :
		
		char a[100];                                                                                         
		
	public :
		
		Message()
		{
			char b[100];
			
			cout<<"Enter The String :";
			cin>>b;
			
			strcpy(a,b);
		}
		void print()
		{
			cout<<" ";
		}
		void print(char c)
		{
			
			cout<<"\ninternal string :"<<a;
		}
};
main()
{
	Message m1;
	
	m1.print();
	m1.print('c');
}
