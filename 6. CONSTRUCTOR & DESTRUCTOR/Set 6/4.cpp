#include<iostream>
using namespace std;
class Flutter
{
	public :
		
		~Flutter()
		{
			cout<<"\n\n>>>>>=== Best Of Luke ===<<<<<\n\n";
		} 	
		Flutter()
		{
			cout<<"\n\n>>>>>=== Welcome To Flutter ===<<<<<"<<endl;
			cout<<"------------------------------------";
		}
		void bio()
		{
			cout<<"\n\n>>>>>=== Bio Data ===<<<<<"<<endl;
			cout<<"--------------------------"<<endl;
			cout<<"\n>>>>>=== C ===<<<<<"<<endl;
			cout<<"\n>>>>>=== C++ ===<<<<<"<<endl;
			cout<<"\n>>>>>=== Core Flutter ===<<<<<"<<endl;
			cout<<"\n>>>>>=== Advance Flutter ===<<<<<"<<endl;
		}	
};
main()
{
	Flutter f1;
	f1.bio();
}
