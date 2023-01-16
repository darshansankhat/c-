//WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. 
//Create a main( ) that makes an object of your class and calls each of the member functions. 
//Now modify the class so it has instead a single member function with all the arguments defaulted.
#include<iostream>
using namespace std;
class Contains
{
	public :
		
		void data()
		{
			cout<<"\n\n>>>>>=== Hello World ===<<<<<"<<endl;
		}
		void data(char a)
		{
			cout<<"\n\n>>>>>=== I Am Flutter Developer ===<<<<<"<<endl;
		}
		void data(char a,char b)
		{
			cout<<"\n\n>>>>>=== I Am R & W Student ===<<<<<"<<endl;
		}
		void data(char a,char b,char c)
		{
			cout<<"\n\n>>>>>=== My Name Is Darshan ===<<<<<"<<endl;
		}
};
main()
{
	Contains c1;
	
	c1.data();
	c1.data('a');
	c1.data('a','b');
	c1.data('a','b','c');
}
